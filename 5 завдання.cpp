// Завдання 5
// 13 варіант

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y, d;
    cout << "Type y: ";
    cin >> y;
    cout << "Type d: ";
    cin >> d;
    
    if ((pow(M_E, y) + log(d) == 0))  
    {                                 

        cout << "y чи d не задовольняє область визначення";
            return 0;

    }

   // Перевірку області визначення функції загалом можна було б не робити, проаналізувавши знаменник числового виразу самостійно.
   // Логарифм дорівнює нулю при d = 1, проте не існує такого значення y, при якому число Ейлера дорівнювало б нулю. 
   // Отже, область визначення функції R.

    x = ((pow(sin(y), 2) + 0.3 * d) / (pow(M_E, y) + log(d)));  

        cout << "Result x = " << x << endl;
    
    return 0;

}
