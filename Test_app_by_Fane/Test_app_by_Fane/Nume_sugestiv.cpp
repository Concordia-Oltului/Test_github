#include "Nume_sugestiv.h"
#include <iostream>

MyClass::MyClass() {
	x = 0;
	y = 0;
	std::cout << "Constructor gol" << std::endl;
}

MyClass::MyClass(int a, int b) {
	x = a;
	y = b;
	std::cout << "Constructor explicit" << std::endl;
}

MyClass::~MyClass() {
	std::cout << "Destructor" << std::endl;
}

int MyClass::getX() {
	return x;
}
int MyClass::getY() {
	return y;
}