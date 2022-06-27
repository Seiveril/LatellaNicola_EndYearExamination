#include "application.h"
#include "basegameobj.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>


void myApplication::createWindow(const float windowWidth, const float windowHeight, const char* title)
{
	myWindow = new sf::RenderWindow(sf::VideoMode(windowWidth, windowHeight), title, sf::Style::Close | sf::Style::Resize);

	addObject();

	if (!myWindow)
	{
		std::cerr << "Failed application window initialization \n";
		return;
	}
}

bool myApplication::isRunning()const { return myWindow->isOpen(); }


void myApplication::run()
{
	while (myWindow->isOpen())
	{
		render(vecgameobjs);
		updateobjs(vecgameobjs);
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

void myApplication::addObject()
{

	BaseGameObj* go = new BaseGameObj();

	go->setObj();

	vecgameobjs.push_back(go);
}

void myApplication::render(std::vector<BaseGameObj*> vecgameobjs)
{

	myWindow->clear(background);
	for (auto gameobj : vecgameobjs)
	{
		myWindow->draw(*gameobj->gameobjectshape);
	}
	myWindow->display();

}

void myApplication::updateobjs(std::vector<BaseGameObj*> vecgameobjs)
{
	for (auto gameobj : vecgameobjs)
	{
		gameobj->movementupdate();
	}
}