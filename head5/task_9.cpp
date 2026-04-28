#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"
#include <limits>

int main() 
{   
    try {
        vector<int> nums;
        int value = 0;
        cout << "Введдите несколько целых чисел через пробел (| для окончания ) ";
        // считываем значение в вектор
        while (cin >> value) {
            nums.push_back(value);
        }
        // проверяем последнее число и обрабатываем ошибку 
        if (cin.fail()) {
            cin.clear();//сбрасываем флаг ошибки чтобы читать дальше 
            char ch;
            cin >> ch; // забираем символ на котором столкнлся cin
            // если это не |, то это мусор 


            if (ch != '|') {
                throw runtime_error("ОШИБКА!!! Введено не верное число\n");
            }
        }
        cin.clear();
        string dummy;
        cin >> dummy;
        cout << "Введите кол-во суммируемых значений: ";
        int count_for_sum = 0;
        cin >> count_for_sum;
        if (count_for_sum > nums.size()) throw invalid_argument("Сумма не возможна, в векторе значений меньше");
        long long sum = 0; // чтобы поймать int переполнение ставим тип больше, потому что иначе не сработает если он уже переполнен
        cout << "\nСумма первых ("<< count_for_sum << ") чисел (";
        for (int i = 0; i < count_for_sum; i++) {
            sum = sum + nums[i];
            cout << nums[i] << " ";
        }
        // проверим на переполнение 
        if(sum > numeric_limits<int>::max() || sum < numeric_limits<int>::min()) {
            throw overflow_error("Переполнение");
        }
        cout << ") равна " << sum <<'\n'; 
    }
    catch (const exception& e) { // ловим все отсальные стандартные ошибки
        cerr << e.what() << endl;
    }
}