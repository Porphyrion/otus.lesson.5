/**
\mainpage Проектирование простого графического редактора

Спроектирован класс  класс приложения для работы с документом, класс документа и полиморфный класс графического примитива.
*/


/*!
\file
\brief 

В файле код демонстрирующий работу спроектированного графического редактора
*/
#include <iostream>
#include <string>
#include "App.h"

int main(){

	App editor;
	editor.newDocument();
	editor.drawCircle();
	editor.deletePrimitive();

}		