// Задача 21: Поиск баллов по имени
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isNameUnique(const vector<string>& names, const string& name) {
    for (const string& existing : names) {
        if (existing == name) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> names;
    vector<int> scores;

    cout << "Введите пары (имя балл). Для завершения: NoName 0\n";

    while (true) {
        string name;
        int score;

        cin >> name >> score;

        if (name == "NoName" && score == 0) {
            break;
        }

        if (!isNameUnique(names, name)) {
            cout << "Ошибка: имя '" << name << "' уже существует!\n";
            continue;
        }

        names.push_back(name);
        scores.push_back(score);
    }

    cout << "\nВсе пары (имя, баллы):\n";
    for (size_t i = 0; i < names.size(); i++) {
        cout << names[i] << " " << scores[i] << "\n";
    }

    // Поиск по имени
    string search_name;
    cout << "\nВведите имя для поиска: ";
    cin >> search_name;

    bool found = false;
    for (size_t i = 0; i < names.size(); i++) {
        if (names[i] == search_name) {
            cout << "Баллы для " << search_name << ": " << scores[i] << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Имя не найдено\n";
    }

    return 0;
}
