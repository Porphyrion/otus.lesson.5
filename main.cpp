#include <iostream>
#include <string>
#include "Controller.h"
#include "App.h"

int main(){
	AppController aC(new App());
	aC.newDocument();
	aC.drawCircle();
}		