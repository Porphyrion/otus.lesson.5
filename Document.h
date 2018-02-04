#pragma once

#include <string>
#include <vector>
#include "Primitive.h"

/*!
	\brief Класс документа	
*/

/*!
\file
	Файл документа
*/
class Document{

public:

	/*!
	Конструктор
	*/
	Document(std::string name_) : name(name_){};

	void drawPrimitive (Primitive * somePrimitive) {
		primitives.push_back(somePrimitive);
	};

	void deletePrimitive () {
		if(!primitives.empty()){
			primitives.pop_back();
		}
	};

	void rename(std::string name_){
		name = name_;
	}


private:
	std::vector<Primitive * > primitives;
	std::string name;


};