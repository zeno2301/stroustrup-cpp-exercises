#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"

double ctok(double kelvins) {
    double tsel = kelvins - 273.15;
    //if (k < -273.15) throw invalid_argument("Ошибка!!! Температура недопустима");
    return tsel;
}

int main()
{

    double temp_kelvins = 0;
    cout << "Введите температуру в цельсиях: ";
    cin >> temp_kelvins;

    double temp_tsels = ctok (temp_kelvins);
    cout << temp_tsels << " Цельсиев\n";

}