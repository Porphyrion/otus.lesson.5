#pragma once


/*!
\brief Родительский класс графического примитива
*/
class Primitive
{
public:
    virtual ~Primitive() {}

protected:
    Primitive(std::string name_):name(name_){}
    std::string  name;
};

/*!
\brief Дочерний класс круга
*/
class Circle : public Primitive
{
public:
    Circle(std::string name_) : Primitive(name_) {}
};

/*!
\brief Дочерний класс треугольника
*/
class Triangle : public Primitive
{
public:
    Triangle(std::string name_) : Primitive(name_) {}
};

/*!
\brief Дочерний класс круга
*/
class Square : public Primitive
{
public:
    Square(std::string name_) : Primitive(name_) {}
};