#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    int window_w, window_h, circle_r;
    float x, y, s, h, vx, vy;
    sf::Clock timer;
    sf::Vector2f v(0.05f, 0.05f);
    int keyonoff=1;
    window_w = 800;
    window_h = 600;
    circle_r = 100;
    x = (window_w) / 4;
    y = (window_h) / 2;
    sf::RenderWindow window(sf::VideoMode(window_w, window_h), "Nasze okno");
    sf::CircleShape shape(circle_r);
    shape.setPosition(y, x);
    shape.setFillColor(sf::Color::Red);
    while (window.isOpen()) {
        shape.move(v);
        if (shape.getPosition().x > window.getSize().x - 2*shape.getRadius() || shape.getPosition().x < 0)
            v.x *= -1;
        if (shape.getPosition().y > window.getSize().y - 2*shape.getRadius() || shape.getPosition().y < 0)
            v.y *= -1;
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
                keyonoff=1-keyonoff;
        }
        window.clear(sf::Color::Black);
        if (keyonoff)
            window.draw(shape);
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();
    }
    return 0;
}