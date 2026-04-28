#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"

double ToForengeit(double tsels_temp) {
    double forengeit_temp = (tsels_temp * 1.8) + 32;
    // проверка на абсолютный ноль
    if (forengeit_temp < -459.67) throw invalid_argument("Ошибка!!! Такая температура не допустима!");
    return forengeit_temp;
}

double ToTsels (double farengeit_temp) {
    double tsels_temp = (farengeit_temp / 1.8) - 32;
    // проверка на абсолютный ноль
    if (tsels_temp < -273.15 ) throw invalid_argument("Ошибка!!! Такая температура не допустима!");
    return tsels_temp;
}

int main()
{
    int button = 0;
    cout << "----------------------\n";
    cout << "0. Перевод Цельсии в градусы по Фаренгейту\n";
    cout << "1. Перевод из Фаренгейта в градусы по Цельсию\n";
    cout << "----------------------\n";
    cin >> button;
    cout << "Прекрасно, теперь введите значение: ";
    double value = 0;
    cin >> value;
    if (button == 0) {
        double forengeit = ToForengeit(value);
        cout << "Ваша температура по Фарангету будет = " << forengeit << '\n';
    }
    else if (button == 1) {
        double tsels = ToTsels(value);
        cout << "Ваша температура по Цельсию будет = " << tsels << '\n';    
    }
    else 
    {
        cout << "Error";
    }
}