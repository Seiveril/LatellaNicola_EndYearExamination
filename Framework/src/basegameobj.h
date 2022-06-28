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

	/// <summary>
	/// Sets object properties.
	/// </summary>
	/// <param name="path"> is the file path.</param>
	/// <param name="Width"> is the object witdh.</param>
	/// <param name="Height"> is the object height.</param>
	void setObj(std::string path, float Width, float Height);

	/// <summary>
	/// Adds movement to the game object.
	/// </summary>
	void addMovement();

private:

	sf::RectangleShape* gameobjectshape;

};

#endif

