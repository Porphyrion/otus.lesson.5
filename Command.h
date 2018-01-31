#pragma once
#include "Document.h"
#include <string>

class Command
{
public:
    virtual void execute() = 0;
    virtual ~Command() {}

protected:
    Command(Document *d): document(d) {}
    Document * document;
};


class DrawCircle : public Command
{
public:
    DrawCircle(Document * d) : Command(d) {}
    void execute() override
    {
        std::cout<<"DrawCircle";
    }
};

class DrawSquare : public Command
{
public:
    DrawSquare(Document * d, const std::string &fname_) : Command(d) {}
    void execute() override
    {
        std::cout<<"Draw Square";
    }
};


/*	Document * execute(std::string name) override
	{
		Document *x = new Document(name);
		return x;
	}
};*/
