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

class Triangle : public Primitive
{
public:
    Triangle(std::string name_) : Primitive(name_) {}
};

class Square : public Primitive
{
public:
    Square(std::string name_) : Primitive(name_) {}
};