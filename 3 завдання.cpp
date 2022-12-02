
// Завдання 3
// 13 варіант
// Написати програму, яка обчислює вирази за двома формулами. 
// Результати обчислення за двома формулами мають збігатися.

#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, z1, z2;
	cout << "Напишіть значеня а = " << endl;
	cin >> a;
	cout << "Напишіть значення b = " << endl;
	cin >> b;

	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	z2 = (1 + sin(2 * b)) / cos(2 * b);

	cout << "Результат z1 = " << z1 << endl;
	cout << "Результат z2 = " << z2 << endl;

}

