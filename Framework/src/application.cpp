#include "application.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void Application::createWindow(const float windowWidth, const float windowHeight, const char* title)
{
	sf::RenderWindow(sf::VideoMode(windowWidth, windowHeight), title);
}