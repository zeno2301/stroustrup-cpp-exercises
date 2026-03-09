// Задача 17: Мода, минимум и максимум строк
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findMode(const vector<string>& vec) {
    if (vec.empty()) return "";

    string mode = vec[0];
    int max_count = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        int count = 0;
        string current = vec[i];

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

string findMin(const vector<string>& vec) {
    if (vec.empty()) return "";
    
    string min_str = vec[0];
    for (const string& s : vec) {
        if (s < min_str) {
            min_str = s;
        }
    }
    return min_str;
}

string findMax(const vector<string>& vec) {
    if (vec.empty()) return "";
    
    string max_str = vec[0];
    for (const string& s : vec) {
        if (s > max_str) {
            max_str = s;
        }
    }
    return max_str;
}

int main() {
    vector<string> words = {"cat", "dog", "pig", "horse", "dog", "dog", "parrot", "pig", "monkey", "cat"};

    cout << "Слова: ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << "\n\n";

    cout << "Мода: " << findMode(words) << "\n";
    cout << "Минимум (лексикографически): " << findMin(words) << "\n";
    cout << "Максимум (лексикографически): " << findMax(words) << "\n";

    return 0;
}
