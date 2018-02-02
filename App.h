#pragma once
#include "Document.h"

class App{
public:
	App(){}

	void newDocument(){
		Document * doc = new Document("Unknow Document");
		Documents.push_back(doc);
	}

	

private:
	Document * doc;

};