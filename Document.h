#pragma once

#include <string>
#include <vector>
#include "Primitive.h"



class Document{

public:

	Document(std::string name_) : name(name_){};

	void drawPrimitive (Primitive * somePrimitive) {
		Primitives.push_back(somePrimitive);
	};

	void deletePrimitive () {
		
	};


private:
	std::vector<Primitive * > Primitives;
	std::string name;


};