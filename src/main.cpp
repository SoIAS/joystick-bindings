#include "SFML/Window.hpp"

int main()
{
	sf::Window window(sf::VideoMode(800, 600), "My Window");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event{};
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.display();
	}

	return 0;
}