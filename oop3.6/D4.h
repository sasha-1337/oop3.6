#pragma once
#include "D1.h"
#include "D3.h"
class D4 : protected D1, private D3
{
	int d4;
public:
	D4(int x, int a, int b, int c, int d, int e) : D1(a, b), D3(c, d, e) { d4 = x; }

	void show_D4()
	{
		cout << " class D4:" << endl;
		show_D1();
		show_D3();
		cout << "	show_D4()" << endl
			<< "	D4::d4 = " << d4 << endl << endl;
	}
};