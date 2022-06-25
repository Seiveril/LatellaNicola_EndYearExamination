#ifndef BASEGAMEOBJ_H
#define BASEGAMEOBJ_H

#include <SFML/Graphics.hpp>
#include "dllclasses.h"

class DECLSPEC BaseGameObj
{

	friend class myApplication;

public:

	void setObjScale();

	sf::RectangleShape* gameobjectshape;

};

#endif

