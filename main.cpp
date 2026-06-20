#include <iostream>
#include <Windows.h>

#include "SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 800, 600}), "Title");

	sf::RectangleShape rectangle({ 400.f, 200.f });

	while (window.isOpen())
	{
		while (std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}

		window.clear(sf::Color::Red);
		window.draw(rectangle);
		window.display();
	}

	return 0;
}