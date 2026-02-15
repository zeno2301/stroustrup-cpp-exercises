#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>


// функция преобразования в см 
double to_cm (double value, string unit) {
    if (unit == "cm") return value;
    if (unit == "m") return value * 100;
    if (unit == "in") return value * 2.54;
    if (unit == "ft") return value * 12 * 2.54;
    return -1;  // неизвестная единица 
}





int main()
{
    double num;
    string unit; 
    //Считыавем первое число
    
    if (!(cin >> num >> unit)) {
        cout << "Нет чисел\n";
        return 0;
    }

    double value_cm = to_cm(num, unit);

    cout << num << unit <<"\n";
    double min_val = value_cm; 
    double max_val = value_cm;
    cout << "Наименьшее среди введенных\n";
    cout << "Наибольшее среди введенных\n";


    // теперь считываеи остальные 
    while (cin >> num >> unit) {
        
        value_cm = to_cm(num, unit);

        if (value_cm < 0) {
            cout << "Едница измерения отклонена ";
            continue;
        }
        cout << num << unit << '\n';
        if (value_cm < min_val) {
            min_val = value_cm;
            cout << "Наименьшее среди введенных значений ";
        }
        if (value_cm > max_val) {
            max_val = value_cm;
            cout << "Наибольшее среди введенных значений ";
        }

    }
    cout << "Программа завершена\n"; 
}       