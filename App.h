#pragma once
#include "Document.h"
#include <string>
/*!
	\brief Класс приложения

	Класс описывает простое приложения векторного редактора
	Может создавать новый документ, открывать документ и сохранять документ в существующий файл
*/

/*!
\file
\brief 
	Файл приложения
*/
class App{
public:

	/*!
	Конструктор
	*/
	App(){}

	/*!
	Деструтор
	*/
	~App(){
		if(doc){
			delete doc;
		}
	}
	/*!
	Создает новый документ
	*/
	void newDocument(){
		Document * doc = new Document("Unknow Document");
	}
	
	/*!
	Открывает документ из файла
	*/
	void openDocument(std::string name){
		Document * doc = new Document(name);
	}
	
	/*!
	Сохраняет документ в файл
	*/
	void saveAsDocument(std::string name){
		doc->rename(name);
	}

	/*!
	Рисует круг на документе
	*/
	void drawCircle(){
		doc->drawPrimitive(new Circle("Circle"));
	}

	/*!
	Рисует треугольник на документе
	*/
	void drawTriangle(){
		doc->drawPrimitive(new Triangle("Triangle"));
	}

	/*!
	Рисует квадрат на документе
	*/
	void drawSquare(){
		doc->drawPrimitive(new Square("Square"));
	}

	/*!
	Удаляет графический примитив из документа
	*/
	void deletePrimitive(){
		doc->deletePrimitive();
	}


private:
	Document * doc;

};