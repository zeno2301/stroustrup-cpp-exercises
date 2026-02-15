#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>



int main()
{
    double num;

    //Считыавем первое число
    if (!(cin >> num)) {
        cout << "Нет чисел\n";
        return 0;
    }

    cout << num << "\n";
    double min_val = num; 
    double max_val = num;
    cout << "Наименьшее среди введенных\n";
    cout << "Наибольшее среди введенных\n";


    // теперь считываеи остальные 
    while (cin >> num) {
        cout << num << '\n';
    
        if (num < min_val) {
            min_val = num;
            cout << "Наименьшее среди введенных значений ";
        }
        if (num > max_val) {
            max_val = num;
            cout << "Наибольшее среди введенных значений ";
        }
    }
    cout << "Программа завершена\n"; 
}       