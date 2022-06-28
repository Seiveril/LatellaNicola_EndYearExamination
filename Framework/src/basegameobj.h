#ifndef BASEGAMEOBJ_H
#define BASEGAMEOBJ_H

#include <SFML/Graphics.hpp>
#include "dllclasses.h"
#include "gotexture.h"

class DECLSPEC BaseGameObj
{

	friend class myApplication;
	friend class Controller;

public:

	void setObj(std::string path);

	void movementupdate();

	sf::RectangleShape* gameobjectshape;

};

#endif

