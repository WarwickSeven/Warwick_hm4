#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int a, b, year;
const int c = 10, d = 0;

int main()
{
    //ДЗ номер 1
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    
    if (a+b >= 10 && a+b <= 20)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    //ДЗ номер 2
    if ((c == 10 && d == 10)||(c+d == 10))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    //ДЗ номер 3
    int e = 0;
    while (e < 50)
    {
    ++e;
    if (e % 2 == 1)
    cout << e << " ";
    }
    
    // ДЗ номер 4
    int x, del = 2;
    cout << "Введите число а я проверю простое оно или нет: ";
    cin >> x;
    
    while (del != x)
    {
    if (x%del == 0)
        {
        cout << "Ваше число не простое." << endl;
        break;
        }
        else
            ++del;
    }
    if (del == x)
    cout << "А число то простое!" << endl;
    
    // ДЗ номер 5
    cout << "Введите год от 1 до 3000: ";
    cin >> year;
    
        if (year%400 == 0)
        {
            cout << "это високосный год." << endl;
        }
        else if (year%100 == 0)
        {
            cout << "это не високосный год." << endl;
        }
        else if (year%4 == 0)
        {
            cout << "это високосный год." << endl;
        }
        else
            cout << "это не високосный год." << endl;
    return 0;
}
