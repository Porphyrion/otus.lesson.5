#include <iostream>
#include <string>
#include "Controller.h"
#include "App.h"

/**
\mainpage Проектирование простого графического редактора
*/

int main(){
	AppController aC(new App());
	aC.newDocument();
	aC.drawCircle();

}		