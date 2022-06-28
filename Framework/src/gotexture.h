#ifndef TEXTURE_H
#define TEXTURE_H

#include <SFML/Graphics.hpp>
#include "dllclasses.h"
#include "basegameobj.h"

class DECLSPEC Texture
{
	friend class BaseGameObj;

public:

	/// <summary>
	/// Creates the texture.
	/// </summary>
	/// <param name="path"> is the texture path.</param>
	/// <param name="Width"> is the texture witdh.</param>
	/// <param name="Height"> is the texture height.</param>
	void createTexture(std::string path, float Width, float Height);

private:

	sf::Texture* gameobjecttexture;

};

#endif
