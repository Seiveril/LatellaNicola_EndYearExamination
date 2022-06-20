#include "application.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void myApplication::createWindow(const float windowWidth, const float windowHeight, const char* title)
{
	myWindow = new sf::RenderWindow(sf::VideoMode(windowWidth, windowHeight), title);

	if (!myWindow)
	{
		std::cerr << "Application window initialization failed!\n";
		return;
	}
}

bool myApplication::isRunning()const { return myWindow->isOpen(); }