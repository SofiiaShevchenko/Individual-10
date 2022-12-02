// Завдання 1.2
// 3 варіант
// Ціни на два види товарів виросли на p%. Вивести старі та нові ціни.

#include <iostream>

using namespace std;

int main()
{
	float a, b, p, a1, b1;
	cout << "Initial price of the first product =  ";
	cin >> a;
	cout << "Initial price of the the second product = ";
	cin >> b;
	cout << "Procent = ";       // вводимо значення не у вигляді відсотків, а десятковим дробом чи цілим числом
	cin >> p;

	a1 = a * (1 + p);
	b1 = b * (1 + p);

	cout << "Old price of the first product = " << a << endl;
	cout << "New price of the first product = " << a1 << endl;

	cout << "Old price of the second product = " << b << endl;
	cout << "New price of the second product = " << b1 << endl;
	return 0;
	
}
