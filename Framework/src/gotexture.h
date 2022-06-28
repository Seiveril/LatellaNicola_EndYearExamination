#ifndef TEXTURE_H
#define TEXTURE_H

#include <SFML/Graphics.hpp>
#include "dllclasses.h"
#include "basegameobj.h"

class DECLSPEC Texture
{
	friend class BaseGameObj;

public:

	void createTexture(std::string path, float Width, float Height);

	sf::Texture* gameobjecttexture;

};

#endif
