#include "pch.h"
#include "windows.h"
#include <iostream>
#include "stdafx.h"
#include "stdlib"

using namespace std;

int main()
{
	void  a, b;
	double h, x, y;
	
	cout << "Input A"
	cin >> a;
	cout << "Input B"
	cin >> b;
	cout << "Input H"
	cin >> h;
	cout << "Input X"
	cin >> x;
	cout << "Input Y"
	cin >> y;

	while (a ==b)
	{
		y = 4+4+4+4+a+b;
		cout << x << y << '\t';
			x += h;
	}
	system("pause");
	return 0;
}
