#pragma once

#include <string>
#include <vector>
#include "Primitive.h"

/*!
	\brief Класс документа
	
*/

class Document{

public:

	Document(std::string name_) : name(name_){};

	void drawPrimitive (Primitive * somePrimitive) {
		Primitives.push_back(somePrimitive);
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