// Задача 5: Простой калькулятор
#include <iostream>
using namespace std;

int main() {
    double first_num, second_num;
    char operation;

    cout << "Введите два числа: ";
    cin >> first_num >> second_num;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Сумма: " << first_num + second_num << "\n";
            break;
        case '-':
            cout << "Разность: " << first_num - second_num << "\n";
            break;
        case '*':
            cout << "Произведение: " << first_num * second_num << "\n";
            break;
        case '/':
            if (second_num == 0) {
                cout << "Ошибка: деление на ноль!\n";
            } else {
                cout << "Частное: " << first_num / second_num << "\n";
            }
            break;
        default:
            cout << "Неизвестная операция\n";
    }

    return 0;
}
