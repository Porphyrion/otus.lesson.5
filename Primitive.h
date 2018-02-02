#pragma once

class Primitive
{
public:
    virtual ~Primitive() {}

protected:
    Primitive(std::string name_):name(name_){}
    std::string  name;
};


class Circle : public Primitive
{
public:
    Circle(std::string name_) : Primitive(name_) {}
};

class Trianle : public Primitive
{
public:
    Circle(std::string name_) : Primitive(name_) {}
};