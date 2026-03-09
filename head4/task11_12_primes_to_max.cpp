// Задачи 11-12: Поиск простых чисел до заданного максимума
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num, const vector<int>& primes) {
    if (num <= 1) return false;
    if (num == 2) return true;
    
    for (int p : primes) {
        if (p * p > num) break;
        if (num % p == 0) return false;
    }
    return true;
}

int main() {
    int max;
    cout << "Введите максимальное число: ";
    cin >> max;

    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i <= max; i++) {
        if (isPrime(i, primes)) {
            primes.push_back(i);
        }
    }

    cout << "Простые числа от 1 до " << max << ":\n";
    for (int p : primes) {
        cout << p << " ";
    }
    cout << "\n";

    return 0;
}
