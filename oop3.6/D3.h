#pragma once
#include "D2.h"
class D3 : public D2
{
	int d3;
public:
	D3(int a, int b, int c) : D2(b, c) { d3 = a; }

	void show_D3()
	{
		cout << " class D3:" << endl;
		show_D2();
		cout << "	show_D3()" << endl
			<< "	D3::d3 = " << d3 << endl << endl;
	}
};

