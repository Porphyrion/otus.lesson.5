#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Primitive.h"

/*!
	\brief Класс документа	
*/

/*!
\file
	Загаловочный файл класса документf
*/
class Document{

public:

	/*!
	Конструктор
	*/
	Document(std::string name_) : name(name_){};
	Document(const Document& d): name(d.sendName()){}
	~Document() {}
	/*!
	Добавление графического примитива на документ
	*/	
	void drawPrimitive (Primitive * somePrimitive) {
		std::cout<<"Draw "<<somePrimitive->sendName()<<std::endl;
		primitives.push_back(somePrimitive);
	};

	/*!
	Удаление графического примитива на документ
	*/
	void deletePrimitive () {
		if(!primitives.empty()){
			std::cout<<"deletePrimitive"<<std::endl;
			primitives.pop_back();
		}
	};

	void rename(std::string name_){
		name = name_;
	}

	std::string sendName() const{
		return this->name;
	}

private:
	std::vector<Primitive * > primitives;
	std::string name;
};