#include "application.h"

int main() {

	std::string path = "res/textures/player.png";
	myApplication* app = new myApplication();
	app->createWindow(1920, 1080, "Latella End Year Examination");
	app->addObject(path);
	app->run();
	return 0;
}