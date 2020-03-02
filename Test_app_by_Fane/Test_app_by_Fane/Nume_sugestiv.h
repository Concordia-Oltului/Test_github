#pragma once

class MyClass {
private:
	int x;
	int y;
public:
	//constructor
	MyClass(int x, int y);
	MyClass ();

	//destructor
	~MyClass();

	//Getters
	int getX();
	int getY();

};
