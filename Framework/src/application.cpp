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

unsigned myApplication::getFrameRate()const { return 1 / elapsedTime; }

void myApplication::run()
{
	lastTime = tm.getCurrentTime();
	while (myWindow->isOpen())
	{
		/*updateGameTime();
		std::cout << "FPS: " << getFrameRate() << std::endl;
		processWindowEvents();
		if (fpsLimitEnabled)
		{
			sf::sleep(sf::seconds((1.0f / maxFPS)));
		}*/
	}
}

void myApplication::updateGameTime()
{
	currentTime = tm.getCurrentTime();
	elapsedTime = TimeManager::calculateElapsedTime(currentTime.asSeconds(), lastTime.asSeconds());
	lag += elapsedTime;
	lastTime = currentTime;
}

void myApplication::processWindowEvents()
{
	sf::Event evt{};
	while (myWindow->pollEvent(evt))
	{
		if (evt.type == sf::Event::EventType::Closed)
		{
			myWindow->close();
		}
	}
}
