
#include"Controller.h"

#include <iostream>


int main()
{
	Controller* controller = new Controller();
	controller->start();
	delete controller;
	return 0;
}

