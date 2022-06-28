#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "basegameobj.h"
#include "dllclasses.h"
#include <SFML/Graphics.hpp>
#include <string>

class DECLSPEC myApplication
{
public:


	/// <summary>
	/// Creates application window.
	/// </summary>
	/// <param name="windowWidth"> is the window width.</param>
	/// <param name="windowHeight"> is the window height.</param>
	/// <param name="windowTitle"> is window main title.</param>
	void createWindow(float windowWidth, float windowHeight, const char* windowTitle);

	/// <summary>
	/// Executes application lifecycle.
	/// </summary>
	void run();

	/// <summary>
	/// Dispatchs window events.
	/// </summary>
	void dispatch_events();

	/// <summary>
	/// Sets the game object and add it to the object vector.
	/// </summary>
	/// <param name="path"> is the file path.</param>
	/// <param name="Width"> is the object witdh.</param>
	/// <param name="Height"> is the object height.</param>
	void addObject(std::string path, float Width, float Height);

	/// <summary>
	/// Renders all the objects.
	/// </summary>
	void render(std::vector<BaseGameObj*> vecgameobjs);

	/// <summary>
	/// Updates object movement.
	/// </summary>
	void updateobjs(std::vector<BaseGameObj*> vecgameobjs);

private:

	sf::Event evnt;
	sf::RenderWindow* myWindow;
	std::vector<BaseGameObj*> vecgameobjs;
};

#endif