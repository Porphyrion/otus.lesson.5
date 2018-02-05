/**
\mainpage Проектирование простого графического редактора

Спроектирован класс контроллера для работы с пользователем, класс приложения для работы с документом, класс документа и фолиморфный класс графического примитива.
*/


/*!
\file
\brief 

В файле код демонстрирующий работу спроектированного графического редактора
*/
#include <iostream>
#include <string>
#include "Controller.h"
#include "App.h"

int main(){

	App editor;
	editor.newDocument();
	editor.drawCircle();
	editor.deletePrimitive();

}		