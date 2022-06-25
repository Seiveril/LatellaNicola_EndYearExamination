#include "basegameobj.h"
#include "application.h"
#include <SFML/Graphics.hpp>


void BaseGameObj::setObjScale()
{

	gameobjectshape = new sf::RectangleShape(sf::Vector2f(100.0f, 100.0f));
	gameobjectshape->setFillColor(sf::Color::White);
}