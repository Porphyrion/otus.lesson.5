#pragma once
#include "Document.h"
#include <vector>

class App{
public:
	App(){}

	void newDocument(){
		Document * doc = new Document("Unknow Document");
		Documents.push_back(doc);
	}

private:
	std::vector<Document *> Documents;

};