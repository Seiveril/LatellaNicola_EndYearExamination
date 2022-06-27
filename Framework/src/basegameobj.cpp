#include "basegameobj.h"
#include "application.h"
#include <SFML/Graphics.hpp>
#include <iostream>


void BaseGameObj::setObj(std::string path)
{
	gameobjectshape = new sf::RectangleShape(sf::Vector2f(64,64)); 
	gameobjecttexture = new sf::Texture();
	//gameobjectshape->setFillColor(sf::Color::White);
	gameobjecttexture->create(64, 64);
	if (!gameobjecttexture->loadFromFile(path))
	{
		std::cout << "Can't load texture" << std::endl;

	}
	gameobjectshape->setTexture(gameobjecttexture);

}

void BaseGameObj::movementupdate()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{

		gameobjectshape->move(0.0f, -0.1f);
		std::cout << "Moving UP" << std::endl;
		//std::cout << &gameobjectshape->getPosition() << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{

		gameobjectshape->move(-0.1f, 0.0f);
		std::cout << "Moving LEFT" << std::endl;
		//std::cout << &gameobjectshape->getPosition() << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{

		gameobjectshape->move(0.0f, 0.1f);
		std::cout << "Moving DOWN" << std::endl;
		//std::cout << &gameobjectshape->getPosition() << std::endl;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{

		gameobjectshape->move(0.1f, 0.0f);
		std::cout << "Moving RIGHT" << std::endl;
		//std::cout << &gameobjectshape->getPosition() << std::endl;

	}

}