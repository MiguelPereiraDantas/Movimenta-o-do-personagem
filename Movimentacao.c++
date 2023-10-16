#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Movimentação do Personagem");

    sf::CircleShape character(50.f);
    character.setFillColor(sf::Color::Green);
    character.setPosition(400, 300);

    float speed = 5.0f;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Movimentação usando as teclas W, A, S e D
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            character.move(0, -speed);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            character.move(-speed, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            character.move(0, speed);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            character.move(speed, 0);

        window.clear();
        window.draw(character);
        window.display();
    }

    return 0;
}
