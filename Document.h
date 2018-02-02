#pragma once

#include <string>
#include <vector>
#include "Primitive.h"



class Document{

public:

	Document(std::string name_):name(name_){};

	void drawPrimitive (Primitive * somePrimitive) {

	};

	void deletePrimitive () {};


private:
	std::string name;


};