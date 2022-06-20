#ifndef APPLICATION_H
#define APPLICATION_H

#include "../dllclasses.h"
#include <vector>
#include <SFML/Graphics.hpp>


class DECLSPEC myApplication
{
public:

	/// <summary>
	/// Creates application window
	/// </summary>
	/// <param name="windowWidth"> is the window width</param>
	/// <param name="windowHeight"> is the window height</param>
	/// <param name="windowTitle"> is window main title</param>
	void createWindow(float windowWidth, float windowHeight, const char* windowTitle);

	/// <summary>
	/// Get TRUE if the application should kill itself.
	/// </summary>
	/// <returns> TRUE or FALSE</returns>
	bool isRunning()const;

	/// <summary>
	/// Executes application lifecycle.
	/// </summary>
	void run();

private:

	sf::RenderWindow* myWindow;

};

#endif