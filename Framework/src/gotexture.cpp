#include "gotexture.h"
#include "application.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Texture::createTexture(std::string path)
{

	gameobjecttexture = new sf::Texture();
	gameobjecttexture->create(64, 64);
	if (!gameobjecttexture->loadFromFile(path))
	{
		std::cout << "Can't load texture" << std::endl;

	}

}