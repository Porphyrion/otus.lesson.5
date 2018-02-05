#pragma once

/*!
\file
\brief Заголовочный файл с описанием графический примитивов
*/

/*!
\brief Родительский класс графического примитива
*/
class Primitive
{
public:
    virtual ~Primitive() {}
    virtual std::string sendName() = 0;

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
    Circle() : Primitive("Circle") {}

    std::string sendName() override 
    {
    	return this->name;
    }
};

/*!
\brief Дочерний класс треугольника
*/
class Triangle : public Primitive
{
public:
    Triangle() : Primitive("Triangle") {}

    std::string sendName() override 
    {
    	return this->name;
    }
};

/*!
\brief Дочерний класс круга
*/
class Square : public Primitive
{
public:
    Square() : Primitive("Square") {}
    
    std::string sendName() override 
    {
    	return this->name;
    }
};