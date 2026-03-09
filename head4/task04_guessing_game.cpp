// Задача 4: Игра "Угадай число" (бинарный поиск)
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Загадайте число от 1 до 100\n";
    cout << "Отвечайте 'да' или 'нет'\n\n";
    
    int low = 1;
    int high = 100;
    int attempts = 0;

    while (low < high) {
        int mid = (low + high) / 2;
        string answer;

        cout << "Ваше число меньше или равно " << mid << "? ";
        cin >> answer;
        attempts++;

        if (answer == "да") {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << "\nВаше число: " << low << "\n";
    cout << "Попыток: " << attempts << "\n";

    return 0;
}
