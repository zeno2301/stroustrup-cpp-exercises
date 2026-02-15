#include<iostream>
using namespace std;
#include "std_lib_facilities.h"





int main()
{
    int a, b;
    while (cin >> a >> b) {
        cout << a << " и " << b << '\n';

        if (a == b) {
            cout << "Числа равны\n";
        }
        else {
        
            if (a < b) {
                cout << "Наименьшее значение равно: " << a << '\n';
            }
            else {
                cout << "Наименьшее значение равно: " << b << '\n';
            }
            if (a > b) {
                cout << "Наибольшее значение: " << a << '\n';
            }
            else {
                cout << "Наибольшее значение: " << b << '\n';
            }
        }
    }
    cout << "Программа завершена\n"; 
}       