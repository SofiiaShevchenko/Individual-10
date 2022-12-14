// 2 завдання
// 8 варіант
// Трикутник задано координатами вершин A(0;0),B(i;i-1),C(-i;i+1), де і – номер варіанта. 
// Обчислити висоту hb та медіану mc.



#include <iostream>
#include <math.h> 
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float i = 8, a, b, c, p, S, hb, mc;

	// Шукаємо сторони трикутника ABC 
	// Навпроти кута А лежить сторона a (сторона BC), навпроти кута B - сторона b (сторона AC), 
	// і відповідно навпроти кута С лежить сторона с (сторона AB)

	a = sqrt(pow(-i - i, 2) + pow(i + 1 - i - 1, 2));
	cout << "Сторона BC: " << a << "\n";
	b = sqrt(pow(-i - 0, 2) + pow(i + 1 - 0, 2));
	cout << "Сторона AC: " << b << "\n";
	c = sqrt(pow(i - 0, 2) + pow(i - 1 - 0, 2));      
	cout << "Сторона AB: " << c << "\n";

	p = (a + b + c) / 2;   // Шукаємо півпериментр для подальшого обчислення площі трикутника

	S = sqrt(p * (p - a) * (p - b) * (p - c));   // Водночас S дорівнює 1/2 * b * hb, звідси й знаходимо висоту hb
	 
	hb = 2 * S / b;
	mc = (sqrt(2 * pow(a, 2) + (2 * pow(b, 2)) - pow(c, 2)) / 2);

	cout << "Висота, проведена до сторони b, дорівнює " << hb << endl;
	cout << "Медіана, проведена до сторони c, дорівнює " << mc << endl;
	
	return 0;
	
}

