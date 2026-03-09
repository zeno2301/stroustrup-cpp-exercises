// Задача 15: Первые N простых чисел
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Сколько простых чисел найти? ";
    cin >> n;

    if (n <= 0) {
        cout << "Число должно быть положительным\n";
        return 0;
    }

    cout << "Первые " << n << " простых чисел:\n";
    
    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << "\n";

    return 0;
}
