#include "application.h"

int main()
{
    myApplication* newapp = new myApplication();
    newapp->createWindow(1920, 1080, "My Awesome Game");
    //newapp->setMaxFPS(60);
    //newapp->enableFPSLimit();
    //newapp->disableFixedUpdate();
    newapp->run();

	return 0;
}