// Задача 1: Вычисление средней температуры
#include <iostream>
#include <vector>
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

    double sum = 0;
    for (double x : temps) {
        sum += x;
    }
    
    cout << "Средняя температура: " << sum / temps.size() << "\n";
    
    return 0;
}
