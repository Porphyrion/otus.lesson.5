#include <iostream>
#include <string>
#include "Controller.h"
#include "App.h"

/**
\mainpage Проектирование простого графического редактора

Прогрмаа иммитируют работу просто графического редактора, который может рабоать с одним документом,
рислвать на нем простые фигуры(квадрат, треугольник, круг), сохранять документ в файл, открывать документ из файла.
*/

int main(){
	AppController aC(new App());
	aC.newDocument();
	aC.drawCircle();

}		