#pragma once

#include <SFML/Graphics.hpp>

class Controller
{
public:

	[[nodiscard]] sf::Vector2f get_axis_vector()const { return { XAxis, YAxis }; }

protected:
	void update();

private:
	bool forwardMovement;
	bool rightwardMovement;
	float XAxis, YAxis;
};

