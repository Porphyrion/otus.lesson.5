#pragma once
#include "Document.h"
#include <string>

class DrawCommand
{
public:
    virtual void execute();
    virtual ~Command() {}

protected:
    Command(Document *d): document(d) {}
    Document * document;
};


class DrawCircle : public DrawCommand
{
public:
    DrawCircle(Document * d) : Command(d) {}
    void execute() override
    {
        d->DrawCircle();
    }
};

class DrawTrianle : public DrawCommand
{
public:
    DrawTrianle(Document * d) : Command(d) {}
    void execute() override
    {
        d->DrawTrianle();
    }
};

class DrawSquare : public DrawCommand
{
public:
    DrawSquare(Document * d) : Command(d) {}
    void execute() override
    {
        d->DrawSquare();
    }
};



