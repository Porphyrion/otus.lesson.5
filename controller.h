#pragma once

#include "App.h"
#include <string>
/*!
	\brief Класс контроллера

	Реализация паттера контроллер
*/

class AppController{ 

public:
	AppController(App *app_): app(app_){};

	void newDocument(){
		app->newDocument();
	}

	void openDocument(std::string name){
		app->openDocument(name);
	}

	/*void saveAsDocument(std::string name){
		app->saveAsDocument();
	}*/

	void drawCircle(){
		app->drawCircle();
	}

	void drawTriangle(){
		app->drawCircle();
	}

	void drawSquare(){
		app->drawCircle();
	}

private:
	App * app;
};