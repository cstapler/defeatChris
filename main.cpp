#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Defeat Chris");
    sf::Texture texture;
    texture.loadFromFile("images/adventurer-Sheet.png");
    
    sf::Sprite sprite(texture, sf::IntRect(0,0,50, 37));
    sf::View view1(sf::FloatRect(200.f, 200.f, 300.f, 200.f));
    window.setView(view1);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}