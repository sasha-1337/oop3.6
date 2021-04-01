#include <Windows.h>
#include "D4.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B x0(777);
	cout << " B x0(777);" << endl;
	cout << " sizeof(B) = " << sizeof(B) << endl;
	cout << endl << " Ієрархія класу B: " << endl;
	x0.show_B();

	D1 x1(111, 222);
	cout << " D1 x1(111, 222);" << endl;
	cout << " sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << " Ієрархія класу D1: " << endl;
	x1.show_D1();

	D2 x2(1000, 2000);
	cout << "D2 x2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	x2.show_D2();

	D3 x3(100, 200, 300);
	cout << " D3 x3(100, 200, 300);" << endl;
	cout << " sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << " Ієрархія класу D3: " << endl;
	x3.show_D3();

	D4 x4(1, 2, 3, 4, 5, 6);
	cout << " D4 x4(1, 2, 3, 4, 5, 6);" << endl;
	cout << " sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << " Ієрархія класу D4: " << endl;
	x4.show_D4();

	return 0;
}