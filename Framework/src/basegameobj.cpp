#include "basegameobj.h"
#include "application.h"
#include <SFML/Graphics.hpp>
#include <iostream>


void BaseGameObj::setObj(std::string path, float Width, float Height)
{

	Texture texture;
	gameobjectshape = new sf::RectangleShape(sf::Vector2f(Width, Height));
	texture.createTexture(path);
	gameobjectshape->setTexture(texture.gameobjecttexture);

}

void BaseGameObj::addMovement()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{

		gameobjectshape->move(0.0f, -0.1f);
		std::cout << "Moving UP" << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{

		gameobjectshape->move(-0.1f, 0.0f);
		std::cout << "Moving LEFT" << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{

		gameobjectshape->move(0.0f, 0.1f);
		std::cout << "Moving DOWN" << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{

		gameobjectshape->move(0.1f, 0.0f);
		std::cout << "Moving RIGHT" << std::endl;

	}

}