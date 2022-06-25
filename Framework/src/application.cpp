#include "application.h"
#include "basegameobj.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>


void myApplication::createWindow(const float windowWidth, const float windowHeight, const char* title)
{
	myWindow = new sf::RenderWindow(sf::VideoMode(windowWidth, windowHeight), title, sf::Style::Close | sf::Style::Resize);

	BaseGameObj* go = new BaseGameObj();

	go->setObjScale();

	vecgameobjs.push_back(go);

	if (!myWindow)
	{
		std::cerr << "Failed application window initialization \n";
		return;
	}
}

bool myApplication::isRunning()const { return myWindow->isOpen(); }


void myApplication::run()
{
	BaseGameObj gmobj;
	lastTime = tm.getCurrentTime();
	while (myWindow->isOpen())
	{
		render(vecgameobjs);
		dispatch_events();

	}
}

void myApplication::dispatch_events()
{
	
	while (myWindow->pollEvent(evnt))
	{

		switch (evnt.type)
		{
		case sf::Event::Closed:

			myWindow->close();
			break;

		case sf::Event::Resized:

			std::cout << "Window size: " << evnt.size.width << "x" << evnt.size.height << std::endl;

			break;
		}

	}
}

void myApplication::updateTime()
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

void myApplication::render(std::vector<BaseGameObj*> vecgameobjs)
{

	myWindow->clear(backgroundColor);
	for (auto gameobj : vecgameobjs)
	{
		myWindow->draw(*gameobj->gameobjectshape);
	}
	myWindow->display();

}