#ifndef TIME_MANAGER_H
#define TIME_MANAGER_H

#include <SFML/System.hpp>
#include "dllclasses.h"

struct DECLSPEC TimeManager
{
public:

	sf::Time getCurrentTime()const;

	static float calculateElapsedTime(float currentTime, float lastTime);

private:
	sf::Clock clk;
};

#endif
