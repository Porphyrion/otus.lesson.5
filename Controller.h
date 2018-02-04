#pragma once

#include "App.h"
#include <string>
/*!
	\brief Класс контроллера

	Реализация паттера контроллер, для взаимодецствия с пользоветлем 
*/

/*!
\file
\brief 
	Файл контроллера
*/
class AppController{ 

public:

	/*!
	Конструктор
	*/
	AppController(App *app_): app(app_){};

	/*!
	Создает новый документ
	*/
	void newDocument(){
		app->newDocument();
	}

	/*!
	Открывает документ
	\param[name - имя файла для открытия
	*/
	void openDocument(std::string name){
		app->openDocument(name);
	}

	/*!
	Сохраняет документ в существующий файл
	\param[name - имя файла для записи
	*/
	void saveAsDocument(std::string name){
		app->saveAsDocument(name);
	}

	/*!
	Рисует круг на документе
	*/
	void drawCircle(){
		app->drawCircle();
	}

	/*!
	Рисует треугольник на документе
	*/
	void drawTriangle(){
		app->drawCircle();
	}

	/*!
	Рисует круг на документе
	*/
	void drawSquare(){
		app->drawCircle();
	}

	/*!
	Удаляет фигуру с документа
	*/
	void deletePrimitive(){
		app->deletePrimitive();
	}

private:
	App * app;
};
