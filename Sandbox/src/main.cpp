#include "application.h"

int main() {

	myApplication* app = new myApplication();
	app->createWindow(1920, 1080, "Latella End Year Examination");
	app->addObject("res/textures/player.png",64, 64);
	app->run();
	return 0;
}