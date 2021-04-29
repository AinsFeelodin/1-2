#include <iostream>
#include <math.h>
#include <windows.h>
использование пространства имен std;
/**
* \brief Функция, объём и радиус
* \v - формула объёма шара
* \s- формыла полощади круга

**/
void main()
{
    SetConsoleOutputCP(1251);
    float r, v, s;
    cout << "Программа вычисления площади и объема шара\n";
    cout << "Радиус шара: ";
    cin >> r;
    v = 4 / 3 * 3.14 * pow(r, 3);
    s = 4 * 3.14 * pow(r, 2);
    cout << "Объем шара: " << v << " куб. ед." << endl;
    cout << "Площадь шара: " << s << " кв. ед." << endl;
    cin.get();
    cin.get();
   
}