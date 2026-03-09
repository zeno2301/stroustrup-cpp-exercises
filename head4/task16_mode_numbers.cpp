// Задача 16: Поиск моды (числа)
#include <iostream>
#include <vector>
using namespace std;

int findMode(const vector<int>& vec) {
    if (vec.empty()) return 0;

    int mode = vec[0];
    int max_count = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        int count = 0;
        int current = vec[i];

        for (size_t j = 0; j < vec.size(); j++) {
            if (vec[j] == current) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            mode = current;
        }
    }

    return mode;
}

int main() {
    vector<int> numbers = {3, 5, 6, 6, 3, 2, 1, 2, 3, 5};

    cout << "Последовательность: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    int mode = findMode(numbers);
    cout << "Мода: " << mode << "\n";

    return 0;
}
