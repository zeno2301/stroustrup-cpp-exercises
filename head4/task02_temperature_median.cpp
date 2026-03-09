// Задача 2: Вычисление медианы температуры
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> temps;
    
    cout << "Введите температуры (Ctrl+D для завершения):\n";
    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    if (temps.empty()) {
        cout << "Нет данных\n";
        return 0;
    }

    // Вычисление средней температуры
    double sum = 0;
    for (double x : temps) {
        sum += x;
    }
    cout << "Средняя температура: " << sum / temps.size() << "\n";

    // Вычисление медианы
    sort(temps.begin(), temps.end());
    int mid = temps.size() / 2;
    
    if (temps.size() % 2 == 0) {
        cout << "Медианная температура: " << (temps[mid-1] + temps[mid]) / 2.0 << "\n";
    } else {
        cout << "Медианная температура: " << temps[mid] << "\n";
    }
    
    return 0;
}
