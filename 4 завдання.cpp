// Завдання 4
// 3 варіант
// Скласти структурну схему алгоритму та програму обчислення значень функції.
// Значення першого з двох параметрів задати як константу, значення другого ввести з клавіатури.

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double a, c, y, x = 2.5, b;
    cout << "Type b: ";
    cin >> b;

    a = pow(b, 3) + log(b);
    c = pow(a, 2) + sqrt(b);
    y = pow(M_E, x) + pow(5.8, c);
    
    cout << "Result a = " << a << endl;
    cout << "Result c = " << c << endl;
    cout << "Result y = " << y << endl;
    
    return 0;

}
