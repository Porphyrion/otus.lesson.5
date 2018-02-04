/**
\mainpage Проектирование простого графического редактора

Спроектирован класс контроллера для работы с пользователем, класс приложения для работы с документом, класс документа и фолиморфный класс графического примитива.
*/


/*!
\file
\brief 

Файл демонстрирует работу спроектированного графического редактора
*/
#include <iostream>
#include <string>
#include "Controller.h"
#include "App.h"

int main(){
	AppController aC(new App());
	aC.newDocument();
	aC.drawCircle();
	aC.drawTriangle();
	aC.deletePrimitive();

}		