#pragma once
#include "Document.h"
#include <string>
/*!
	\brief Класс приложения

	Класс описывает простое приложения векторного редактора
*/
class App{
public:
	App(){}

	void newDocument(){
		Document * doc = new Document("Unknow Document");
	}

	void openDocument(std::string name){
		Document * doc = new Document(name);
	}

	void saveAsDocument(std::string name){
		doc->rename(name);
	}

	void drawCircle(){
		doc->drawPrimitive(new Circle("Circle"));
	}

	void drawTriangle(){
		doc->drawPrimitive(new Triangle("Triangle"));
	}

	void drawSquare(){
		doc->drawPrimitive(new Square("Square"));
	}

private:
	Document * doc;

};