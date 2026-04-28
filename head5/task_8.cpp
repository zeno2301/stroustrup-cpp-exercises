#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"




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
        cin.clear();
        string dummy;
        cin >> dummy;
        cout << "Введите кол-во суммируемых значений: ";
        int count_for_sum = 0;
        cin >> count_for_sum;
        if (count_for_sum > nums.size()) throw invalid_argument("Сумма не возможна, в векторе значений меньше");
        int sum = 0;
        cout << "\nСумма первых ("<< count_for_sum << ") чисел (";
        for (int i = 0; i < count_for_sum; i++) {
            sum = sum + nums[i];
            cout << nums[i] << " ";
        }
        cout << ") равна " << sum <<'\n'; 
    }
    catch (invalid_argument& e) {
        cerr << e.what() << endl;
    }
}