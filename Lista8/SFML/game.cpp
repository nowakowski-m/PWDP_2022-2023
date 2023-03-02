#include "upgrades.h"

int main() {

    openFunctions();

    while (gameWindow.isOpen()) {

        mainMenu();
        gameWindow.display();
     
        while (gameWindow.pollEvent(windowEvent))   {

            if (windowEvent.type == sf::Event::Closed)
                closeFunctions();

        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            backToMenu();

    }
    
    return 0;

}