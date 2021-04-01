#pragma once
#include "B.h"
class D1 : public B
{
	int d1;
public:
	D1(int x, int y) : B(y) { d1 = x; }

	void show_D1()
	{
		cout << " class D1:" << endl;
		show_B();
		cout << "	show_D1()" << endl
			<< "	D1::d1 = " << d1 << endl << endl;
	}
};