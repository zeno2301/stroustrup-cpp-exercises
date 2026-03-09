// Задача 14: Решето Эратосфена с вводом максимума
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max;
    cout << "Введите максимальное число: ";
    cin >> max;

    if (max < 2) {
        cout << "Нет простых чисел\n";
        return 0;
    }

    vector<bool> is_prime(max + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    // Решето Эратосфена
    for (int i = 2; i * i <= max; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max; j += i) {
                is_prime[j] = false;
            }
        }
    }

    cout << "Простые числа от 1 до " << max << ":\n";
    for (int i = 2; i <= max; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
