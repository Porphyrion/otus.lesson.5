#pragma once
#include "Document.h"
#include <string>
#include <vector>
/*!
\file
\brief Заголовочный файл приложения
*/

/*!
	\brief Класс приложения

	Класс описывает простое приложения векторного редактора
	Может создавать новый документ, открывать документ, сохранять документ в существующий файл, добавлять или удалять графические примитивы.	
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
		std::cout<<"Create new document"<<std::endl;
		doc = new Document("Unknow Document");
	}
	
	/*!
	Открывает документ из файла
	*/
	void openDocument(std::string name){
		std::cout<<"Open "<<name<<" document"<<std::endl;
		doc = new Document(name);
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
		doc->drawPrimitive(new Circle());
	}

	/*!
	Рисует треугольник на документе
	*/
	void drawTriangle(){
		doc->drawPrimitive(new Triangle());
	}

	/*!
	Рисует квадрат на документе
	*/
	void drawSquare(){
		doc->drawPrimitive(new Square());
	}

	/*!
	Удаляет графический примитив из документа
	*/
	void deletePrimitive(){
		doc->deletePrimitive();
	}


private:
	Document * doc;
	std::vector<int> ints;


};