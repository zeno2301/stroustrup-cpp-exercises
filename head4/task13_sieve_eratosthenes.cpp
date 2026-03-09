// Задача 13: Решето Эратосфена (1-100)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 100;
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    // Решето Эратосфена
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    cout << "Простые числа от 1 до 100:\n";
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
