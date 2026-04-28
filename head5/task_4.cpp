#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"

double ctok(double c) {
    double k = c + 273.15;
    if (k < -273.15) throw invalid_argument("Ошибка!!! Температура недопустима");
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok (c);
    cout << k << '\n';

}