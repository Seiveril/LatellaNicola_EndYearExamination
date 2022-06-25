#include "basegameobj.h"
#include "application.h"
#include <SFML/Graphics.hpp>


void BaseGameObj::setObjScale()
{

	gameobjectshape = new sf::RectangleShape(sf::Vector2f(100.0f, 100.0f));
	gameobjectshape->setFillColor(sf::Color::White);
}

void BaseGameObj::update()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{

		gameobjectshape->move(0.0f, -0.1f);

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{

		gameobjectshape->move(-0.1f, 0.0f);

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{

		gameobjectshape->move(0.0f, 0.1f);

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{

		gameobjectshape->move(0.1f, 0.0f);

	}

}