#include "gotexture.h"
#include "application.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Texture::createTexture(std::string path, float Width, float Height)
{

	gameobjecttexture = new sf::Texture();
	gameobjecttexture->create(Width, Height);
	if (!gameobjecttexture->loadFromFile(path))
	{
		std::cout << "Can't load shape texture" << std::endl;

	}

}