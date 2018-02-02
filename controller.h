#pragma once

//#include "Command.h"
#include "App.h"
#include <string>


class AppController{ 

public:
	AppController(App *app_): app(app_){};

	void newDocument(){
		app->newDocument();
	}



private:
	App * app;
};