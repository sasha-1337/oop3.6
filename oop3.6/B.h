#pragma once
#include <iostream>

using namespace std;

class B
{
	int b;
public:
	B(int b) { this->b = b; }
	~B(){}

	void show_B()
	{
		cout << "Class B" << endl;
		cout << "	show_B()" << endl;
		cout <<	"	B::b = " << b << endl;
	}
};

