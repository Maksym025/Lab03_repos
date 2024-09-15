// Lab_03_1.1.cpp
// Малащук Максим
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;
	A = (x * x) * sin(x / 2.0);
	if (x <= -5)
		B = atan(exp(x));
	if (-5 < x <= 0)
		B = 1 + (x * x * x) / 4.0;
	if (x > 0)
		B = log(abs(x)) - x / 5.0;
	y = A + B;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}