#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "time_mng.h"
#include "basegameobj.h"
#include "dllclasses.h"
#include <SFML/Graphics.hpp>
#include <string>

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

	void dispatch_events();

	void addObject();

	void render(std::vector<BaseGameObj*> vecgameobjs);

	void updateobjs(std::vector<BaseGameObj*> vecgameobjs);

private:

	void processWindowEvents();
	void updateTime();

private:

	sf::Event evnt;
	sf::RenderWindow* myWindow;
	TimeManager tm;
	sf::Time lastTime, currentTime;
	float elapsedTime;
	float lag;
	unsigned maxFPS;
	bool fpsLimitEnabled;
	float msForFixedUpdate;
	sf::Color backgroundColor = sf::Color::Blue;
	std::vector<BaseGameObj*> vecgameobjs;
};

#endif