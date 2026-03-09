// Задача 20: Поиск имени по баллам
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

    // Поиск по баллам
    int search_score;
    cout << "\nВведите баллы для поиска: ";
    cin >> search_score;

    bool found = false;
    cout << "Имена с баллами " << search_score << ":\n";
    for (size_t i = 0; i < scores.size(); i++) {
        if (scores[i] == search_score) {
            cout << names[i] << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Баллы не найдены\n";
    }

    return 0;
}
