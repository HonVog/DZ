#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
	Number a { 1, 5 };
	Number b { 7, 12 };

	a.SUM(b);
	cout << a.getI << a.getF << endl;
	b.DIFF(12);
	cout << b.getI << b.getF << endl;
	a.MULL(3.5);
	cout << a.getI << a.getF << endl;
	b.DIVIS(a);
	cout << b.getI << b.getF << endl;
}

