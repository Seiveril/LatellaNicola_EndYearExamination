#include "controller.h"
#include <iostream>

void Controller::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		forwardMovement = true;
		YAxis = -1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		forwardMovement = true;
		YAxis = 1;
	}
	else
	{
		forwardMovement = false;
		YAxis = 0;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		rightwardMovement = true;
		XAxis = 1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		rightwardMovement = true;
		XAxis = -1;
	}
	else
	{
		forwardMovement = false;
		XAxis = 0;
	}

	std::cout << "Axis: " << XAxis << "," << YAxis << std::endl;
}
