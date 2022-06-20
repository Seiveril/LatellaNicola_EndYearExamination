#include "time_mng.h"

sf::Time TimeManager::getCurrentTime()const
{
	return clk.getElapsedTime();
}

float TimeManager::calculateElapsedTime(const float currentTime, const float lastTime)
{
	return currentTime - lastTime;
}
