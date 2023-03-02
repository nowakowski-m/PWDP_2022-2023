#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>

const int circle_r = 20;
const int N = 10;
const int window_w = 800;
const int window_h = 600;
float x = (window_w) / 2;
float y = (window_h) / 4;
float g = 9.81;
sf::CircleShape n_circles[N];
float vx[N];
float vy[N];

int main()
{

    float s, h;
    int keyonoff = 1;

    sf::RenderWindow window(sf::VideoMode(window_w, window_h), "Nasze okno");
    // n_circles_drawing();

    for (int i = 0; i < N; i++)
    {
        vx[i] = (rand() % 10)/10.0;
        vy[i] = (rand() % 10)/10.0;

        n_circles[i] = sf::CircleShape(circle_r * (rand() / (float)RAND_MAX));
        n_circles[i].setPosition(x + x * (rand() / (float)RAND_MAX),
                                 y + y * (rand() / (float)RAND_MAX));
        n_circles[i].setFillColor(sf::Color::Red);
    }

    while (window.isOpen())
    {

        for (int i = 0; i < N; i++)
        {

            n_circles[i].move(vx[i], vy[i]);


            if (n_circles[i].getPosition().x >= window.getSize().x - 2*n_circles[i].getRadius() || n_circles[i].getPosition().x <= 0)
                vx[i] *= -1;
            if (n_circles[i].getPosition().y >= window.getSize().y - 2*n_circles[i].getRadius() || n_circles[i].getPosition().y <= 0)
                vy[i] *= -1;
            
            float dt = 0.0001;
            vy[i] = vy[i] + g * dt;
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
                keyonoff = 1 - keyonoff;
        }
        window.clear(sf::Color::Black);
        if (keyonoff)
            for (int i = 0; i < N; i++)
                window.draw(n_circles[i]);
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();
    }

    return 0;
}