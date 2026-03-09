// Задача 3: Статистика расстояний между городами
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> distances;
    
    cout << "Введите расстояния между городами (Ctrl+D для завершения):\n";
    for (double dist; cin >> dist;) {
        distances.push_back(dist);
    }

    if (distances.empty()) {
        cout << "Нет данных\n";
        return 0;
    }

    double sum = 0;
    double min_dist = distances[0];
    double max_dist = distances[0];

    for (double dist : distances) {
        sum += dist;
        if (dist < min_dist) min_dist = dist;
        if (dist > max_dist) max_dist = dist;
    }

    double average = sum / distances.size();

    cout << "Сумма всех расстояний: " << sum << "\n";
    cout << "Минимальное расстояние: " << min_dist << "\n";
    cout << "Максимальное расстояние: " << max_dist << "\n";
    cout << "Среднее расстояние: " << average << "\n";

    return 0;
}
