#include "pch.h"
#include "windows.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	double h, x, y;
	printf("Введите a: ");
	scanf_s("%d", &a);
	printf("Введите b: ");
	scanf_s("%d", &b);
	printf("Введите h: ");
	scanf_s("%lf", &h);
	printf("Введите x: ");
	scanf_s("%lf", &x);
	while (x <= b)
	{
		y = pow(sin(x), 2) + 2 * cos(x) + 3;
		printf("x=%lf   y=%lf\n", x, y);
		x += h;
	}
	system("pause");
	return 0;
}