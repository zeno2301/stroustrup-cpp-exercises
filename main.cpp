#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>



int main()
{
    double a, b;
    while (cin >> a >> b) {
        cout << a << " и " << b << '\n';

        double diff = abs(a-b); // разница между числами 
        if (diff < 0.01) {
            cout << "Числа почти равны \n";
        }
        else if (a == b) {
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