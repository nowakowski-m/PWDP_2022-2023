#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>

int winW = 2160;
int winH = 1360;

int menuPos = 0;
int mouseR = 10;
int colorNum = 0;
float dvdW = 180;
float dvdH = 90;
float dvdVx = 12.0;
float dvdVy = 8.0;
long long points;
long long autoClickTimes = 2;
long long autoClickPrice = 10;
long long morePointsPrice;
long long randPointMax;
long long randPoint, tempPoints;
float cursorScale = 0.05;
bool errorBan = false;
bool userInMenu = true;
bool clickOnes, firstErrorShowed;
std::string pointsString, upgradeString, upgradePriceString;
sf::Texture windowBackground, dvdTexture, cursor, crossTexture;
sf::Texture btnClicked, btnNotClicked, playBtnNotClicked, playBtnClicked, exitBtnNotClicked, exitBtnClicked;
sf::RectangleShape dvd, mainButton, button1, button2;
sf::RenderWindow gameWindow(sf::VideoMode(winW, winH), "DVD Eliminate");
sf::Event windowEvent;
sf::Text pointsNum, wholeScore, errorText, errorPointsText;
sf::Sprite cursorSprite;
sf::Sound shotHit, shotMissed;
sf::SoundBuffer shotHitBuffer, shotMissedBuffer;

// globaly defined functions

void pointsGenerate(), morePoints();

// function loads user's progress in the game

void loadSave() {

    std::ifstream pointsRead("Resources/points.txt");
    
    while (!pointsRead.eof())
        pointsRead >> points;

    pointsRead.close();
    
    std::ifstream upgradeRead("Resources/upgrade.txt");
    
    while (!upgradeRead.eof())
        upgradeRead >> randPointMax;

    upgradeRead.close();

    std::ifstream upgradePriceRead("Resources/upgradePrice.txt");

    while (!upgradePriceRead.eof())
        upgradePriceRead >> morePointsPrice;

    upgradePriceRead.close();

}

// function saves user's progress in the game

void makeSave() {

    pointsString = std::to_string(points);
    upgradeString = std::to_string(randPointMax);
    upgradePriceString = std::to_string(morePointsPrice);

    std::ofstream pointsWrite("Resources/points.txt");
    pointsWrite << pointsString;
    pointsWrite.close();

    std::ofstream upgradeWrite("Resources/upgrade.txt");
    upgradeWrite << upgradeString;
    upgradeWrite.close();

    std::ofstream upgradePriceWrite("Resources/upgradePrice.txt");
    upgradePriceWrite << upgradePriceString;
    upgradePriceWrite.close();

}

// functions have to run while closing the game

void closeFunctions()   {

    gameWindow.close();
    makeSave();

}

// function using bool to disable "long" clicking,
// so user have to click, not leave the button pressed

void clickOnlyOnes(sf::Event &event)  {

    if (event.type == sf::Event::MouseButtonReleased)
        clickOnes = false;

}

// function adjust window background, and draw it on the screen

void createGameBackground() {

    if (userInMenu == true)
        windowBackground.loadFromFile("Graphics/menuBg.jpg");
    if (userInMenu == false)
        windowBackground.loadFromFile("Graphics/windowBg.jpg");
    sf::RectangleShape background;
    background.setSize(sf::Vector2f(winW, winH));
    background.setTexture(&windowBackground);
    gameWindow.draw(background);

}

// function draws a total score at the foreground of screen
// usage: scoreCounter(xPosition, yPosition);

void scoreCounter(int scoreX, int scoreY)  {

    sf::Font pointsFont;
    pointsFont.loadFromFile("Resources/font.ttf");
    wholeScore.setFont(pointsFont);
    wholeScore.setCharacterSize(50);
    wholeScore.setString(std::to_string(points));
    wholeScore.setPosition(scoreX + 5, scoreY + 5);
    wholeScore.setFillColor(sf::Color(0, 0, 0, 125));

    gameWindow.draw(wholeScore); // shadow of score counter

    wholeScore.setPosition(scoreX, scoreY);
    wholeScore.setFillColor(sf::Color::Magenta);

    gameWindow.draw(wholeScore); // final score counter

}

// function sets next colors for dvd logo

void setNextColor() {

    switch (colorNum) {
        
        case 0:
            dvd.setFillColor(sf::Color(255, 255, 255, 255));
            break;
        case 1:
            dvd.setFillColor(sf::Color(255, 153, 204, 255));
            break;
        case 2:
            dvd.setFillColor(sf::Color(255, 153, 255, 255));
            break;
        case 3:
            dvd.setFillColor(sf::Color(204, 153, 255, 255));
            break;
        case 4:
            dvd.setFillColor(sf::Color(153, 153, 255, 255));
            break;
        case 5:
            dvd.setFillColor(sf::Color(153, 204, 255, 255));
            break;
        case 6:
            dvd.setFillColor(sf::Color(153, 255, 255, 255));
            break;
        case 7:
            dvd.setFillColor(sf::Color(153, 255, 204, 255));
            break;
        case 8:
            dvd.setFillColor(sf::Color(153, 255, 153, 255));
            break;
        case 9:
            dvd.setFillColor(sf::Color(204, 255, 153, 255));
            break;
        case 10:
            dvd.setFillColor(sf::Color(255, 255, 153, 255));
            break;
        case 11:
            dvd.setFillColor(sf::Color(255, 204, 153, 255));
            break;
        case 12:
            dvd.setFillColor(sf::Color(255, 153, 153, 255));
            break;
        case 13:
            colorNum = 0;
            break;

    }

    colorNum += 1;

}

// function draws error, when score is going to be higher,
// than long long format highest possible number.

void highScoreError ()  {

    errorBan = true;
    sf::Font errorFont;
    errorFont.loadFromFile("Resources/font.ttf");
    errorText.setFont(errorFont);
    errorText.setCharacterSize(50);
    std::string errorString = "Error: too high score, buy any upgrade.";
    errorText.setString(errorString);
    errorText.setPosition((winW / 2 - errorString.length()*30), 10);
    errorText.setFillColor(sf::Color::Red);

    gameWindow.draw(errorText);

}

// function prints error if you have not enough points for buying upgrade

void notEnoughPointsError ()  {

    sf::Font errorFont;
    errorFont.loadFromFile("Resources/font.ttf");
    errorText.setFont(errorFont);
    errorText.setCharacterSize(50);
    std::string errorPointsString = "Error: not enough points to buy this upgrade.";
    errorPointsText.setString(errorPointsString);
    errorPointsText.setPosition(400, 400);
    errorPointsText.setFillColor(sf::Color::Red);

    gameWindow.draw(errorText);

}

// function spawn dvd only ones and set its values

void dvdSpawn() {

    dvdTexture.loadFromFile("Graphics/dvd.png");
    dvd.setTexture(&dvdTexture);
    dvd.setSize(sf::Vector2f(dvdW, dvdH));
    dvd.setPosition(rand() % winW*0.85, rand() % winH*0.85);
    setNextColor();

}

// function moves the dvd and draw it on the screen

void dvdCreate() {

    if ((dvd.getPosition().x + dvdW) >= winW) {
    
        dvdVx *= (-1);
        setNextColor();
    
    }

    if ((dvd.getPosition().y + dvdH) >= winH) {
     
        dvdVy *= (-1);
        setNextColor();
     
    }

    if ((dvd.getPosition().x) <= 0) {
        
        dvdVx *= (-1);
        setNextColor();
    
    }

    if ((dvd.getPosition().y) <= 0) {
        
        dvdVy *= (-1);
        setNextColor();
        
    }

    dvd.move(sf::Vector2f(dvdVx, dvdVy));
    gameWindow.draw(dvd);

}

// function spawns new dvd, when last was shooted

void dvdClick() {

    if (windowEvent.type == sf::Event::MouseButtonPressed)    {
        if (windowEvent.mouseButton.button == sf::Mouse::Left)   {
            if (windowEvent.mouseButton.x >= dvd.getPosition().x &&
                windowEvent.mouseButton.x <= (dvd.getPosition().x + dvdW) &&
                windowEvent.mouseButton.y >= dvd.getPosition().y &&
                windowEvent.mouseButton.y <= (dvd.getPosition().y + dvdH) &&
                clickOnes == false)   {

                    shotHit.play();
                    pointsGenerate();
                    dvd.setPosition(rand() % winW*0.85, rand() % winH*0.85);

                    if (rand() % 2 == 0)
                        dvdVx *= (-1);
                    if (rand() % 2 == 1)
                        dvdVy *= (-1);

                    dvd.setTexture(&dvdTexture);

            }
            
            else {

                if (userInMenu == false)
                    shotMissed.play();
    
            }
        }
    }  
}

// function resets user's progress and sets default values

void resetFunction()    {

    points = 0;
    morePointsPrice = 50;
    randPointMax = 3;

}

// function to use on button click, randomly adds points to the total score, no args.

void pointsGenerate()   {

    if (firstErrorShowed == true)   {

        if (tempPoints < 0)
            highScoreError();

        else
            errorBan = false;

    }

    if (errorBan == false)  {

        sf::Font pointsFont;
        pointsFont.loadFromFile("Resources/font.ttf");
        pointsNum.setFont(pointsFont);
        pointsNum.setPosition(rand() % winW, rand() % winH);
        randPoint = (rand() % randPointMax+1);
        pointsNum.setString(std::to_string(randPoint));
        tempPoints += randPoint;

        if (tempPoints >= 0)  {
            
            points += randPoint;

            if (randPoint > 0 && randPoint <= randPointMax/3)   {
                
                pointsNum.setCharacterSize(30);
                pointsNum.setFillColor(sf::Color::Red);
            
            }

            if (randPoint > randPointMax/3 && randPoint <= (randPointMax*2) / 3)   {
            
                pointsNum.setCharacterSize(40);
                pointsNum.setFillColor(sf::Color::Yellow);
            
            }

            if (randPoint > (randPointMax*2) / 3 && randPoint <= randPointMax)   {

                pointsNum.setCharacterSize(50);
                pointsNum.setFillColor(sf::Color::Green);
            
            }

            if (randPointMax >= 2147483647) {

                pointsNum.setCharacterSize(60);
                pointsNum.setFillColor(sf::Color::Blue);
            
            }

        }

        else    {

            firstErrorShowed = true;
            highScoreError();

        }

    }

}

// function create crosshair

void createCrosshair() {

    if (cursor.loadFromFile("Graphics/crosshair.png"))
        cursorSprite.setTexture(cursor);

    cursorSprite.setScale(sf::Vector2f(cursorScale, cursorScale));
}

// functions to be run at the start of program

void openFunctions() {

    shotHitBuffer.loadFromFile("Resources/shotHit.wav");
    shotHit.setBuffer(shotHitBuffer);
    shotMissedBuffer.loadFromFile("Resources/shotMissed.wav");
    shotMissed.setBuffer(shotMissedBuffer);
    createCrosshair();
    createGameBackground();
    loadSave();
    dvdSpawn();

}

// function Creating button, where you can add a function on it's click. usage:
// buttonCreate(eventName, upgradeString, posX, posY, sizeX, sizeY, function)

void buttonCreate(sf::Event &event, std::string whatUpgrade,
        int buttonX, int buttonY, int buttonW, int buttonH, void buttonFunction())   {

    sf::RectangleShape button;

    if (userInMenu == true) {

        btnNotClicked.loadFromFile("Graphics/resetBtnNotClicked.jpg");
        btnClicked.loadFromFile("Graphics/resetBtnClicked.jpg");

    }

    if (userInMenu == false) {

        btnNotClicked.loadFromFile("Graphics/upgradeBtnNotClicked.jpg");
        btnClicked.loadFromFile("Graphics/upgradeBtnClicked.jpg");

    }

    button.setSize(sf::Vector2f(buttonW, buttonH));
    button.setOutlineColor(sf::Color::Red);
    button.setTexture(&btnNotClicked);
    button.setPosition(buttonX, buttonY);
    if (event.type == sf::Event::MouseButtonPressed)    {
        if (event.mouseButton.button == sf::Mouse::Left)   {
            if (event.mouseButton.x >= button.getPosition().x &&
                event.mouseButton.x <= (button.getPosition().x + button.getSize().x) &&
                event.mouseButton.y >= button.getPosition().y &&
                event.mouseButton.y <= (button.getPosition().y + button.getSize().y) &&
                clickOnes == false)   {

                    buttonFunction();
                    createGameBackground();
                    button.setTexture(&btnClicked);
                    clickOnes = true;

            }
        }
    }  

    sf::Text upgradeLevel;
    sf::Font upgradeFont;
    upgradeFont.loadFromFile("Resources/font.ttf");
    upgradeLevel.setFont(upgradeFont);
    upgradeLevel.setPosition(button.getPosition().x, button.getPosition().y +
                                                     button.getSize().y + 10);
    upgradeLevel.setString(whatUpgrade);
    upgradeLevel.setFillColor(sf::Color::Magenta);
    
    if (userInMenu == true)
        upgradeLevel.setCharacterSize(10);
    
    if (userInMenu == false)
        upgradeLevel.setCharacterSize(30);

    gameWindow.draw(button);
    gameWindow.draw(upgradeLevel);
    
}

// function creating menu button, where you can add a function on it's click. usage:
// mainButtonCreate(eventName, upgradeString, posX, posY, sizeX, sizeY, function)

void mainButtonCreate(sf::Event &event, std::string whatButton,
        int buttonX, int buttonY, int buttonW, int buttonH, void buttonFunction())   {

    sf::RectangleShape button;

    if (whatButton == "play")   {

        playBtnNotClicked.loadFromFile("Graphics/playBtnNotClicked.jpg");
        playBtnClicked.loadFromFile("Graphics/playBtnClicked.jpg");
        button.setTexture(&playBtnNotClicked);

    }

    if (whatButton == "exit")   {

        exitBtnNotClicked.loadFromFile("Graphics/exitBtnNotClicked.jpg");
        exitBtnClicked.loadFromFile("Graphics/exitBtnClicked.jpg");
        button.setTexture(&exitBtnNotClicked);
    
    }

    button.setSize(sf::Vector2f(buttonW, buttonH));
    button.setOutlineColor(sf::Color::Red);
    button.setPosition(buttonX, buttonY);
    if (event.type == sf::Event::MouseButtonPressed)    {
        if (event.mouseButton.button == sf::Mouse::Left)   {
            if (event.mouseButton.x >= button.getPosition().x &&
                event.mouseButton.x <= (button.getPosition().x + button.getSize().x) &&
                event.mouseButton.y >= button.getPosition().y &&
                event.mouseButton.y <= (button.getPosition().y + button.getSize().y))   {

                    buttonFunction();
                    if (whatButton == "play")
                        button.setTexture(&playBtnClicked);
                    if (whatButton == "exit")
                        button.setTexture(&exitBtnClicked);
                    userInMenu = false;
            }
        }
    }  

    gameWindow.draw(button);
    
}

// functions to use in while loop for making whole game screen

void gameScreen() {

    clickOnlyOnes(windowEvent);
    gameWindow.setFramerateLimit(60);
    buttonCreate(windowEvent, std::to_string(morePointsPrice), winW - (winW / 13), winH - (winH / 1.025), 100, 100, morePoints);
    scoreCounter(winW * 0.015, winH * 0.03);
    dvdClick();
    dvdCreate();
    int mouseX = sf::Mouse::getPosition(gameWindow).x;
    int mouseY = sf::Mouse::getPosition(gameWindow).y;
    cursorSprite.setPosition(mouseX - cursor.getSize().x /2 *cursorScale, mouseY - cursor.getSize().y /2 *cursorScale);
    gameWindow.draw(cursorSprite);

}

// function generates main menu, or create game screen, when bool userInMenu == false

void mainMenu() {

    if (userInMenu == true) {
    
        mainButtonCreate(windowEvent, "play", winW/2 - 100, winH/2 + 50, 200, 100, gameScreen);
        mainButtonCreate(windowEvent, "exit", winW/2 - 100, winH/2 + 200, 200, 100, closeFunctions);
        buttonCreate(windowEvent, "Reset", winW - 100, winH - 100, 50, 50, resetFunction);
    }

    
    if (userInMenu == false) {

        gameWindow.setMouseCursorVisible(false);
        createGameBackground();
        gameScreen();
    
    }

}

// function to be run when ESC key pressed, returns user to menu

void backToMenu() {

    userInMenu = true;
    gameWindow.setMouseCursorVisible(true);
    createGameBackground();
    mainMenu();

}