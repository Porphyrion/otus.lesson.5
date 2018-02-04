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
		 primitives.erase()
	};


private:
	std::vector<Primitive * > rimitives;
	std::string name;


};