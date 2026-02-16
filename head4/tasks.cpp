   // задача перевод гривен , рублей и юаней в доллары
    constexpr double rub_per_dollar = 0.0130;
    constexpr double griv_per_dollar = 0.0232;
    constexpr double uan_per_dollar = 0.1449;
    char unit = ' ';
    double quantity = 1;

    cout << "Пожалуйста, введите сумму"
        <<" и валюту (r-рубли или g-гривны или u-юани):\n";
    
    cin >> quantity >> unit;

    if (unit == 'r') {
        cout << quantity << " rub == "
            << quantity * rub_per_dollar << " usdt\n";
    }
    else if (unit == 'g') {
        cout << quantity << " griv == "
            << quantity * griv_per_dollar << " usdt\n";
    }
    else if (unit == 'u') {
        cout << quantity << " uan == "
            << quantity * uan_per_dollar << " usdt\n";
    }
    else {
        cout << "Извините , ошибка!\n";
    }
    

    // switch с нескольками меток 

    cout << "Пожалуйста введите цифру\n";
    char a;
    cin >> a;

    switch(a) {
    case '0': case '2': case '4': case '6': case '8':
        cout << "четная\n";
        break;
    case '1': case '3': case '5': case '7': case '9':
        cout << "нечетная\n";
        break;
    default: 
        cout << "не цифра\n";
        break;
    }


        // задача перевод гривен , рублей и юаней, фунтов, евро в доллары через свичи
    constexpr double rub_per_dollar = 0.0130;
    constexpr double griv_per_dollar = 0.0232;
    constexpr double uan_per_dollar = 0.1449;
    constexpr double euro_per_dollar = 1.1868;
    constexpr double funt_per_dollar = 1.3621;
    char unit = ' ';
    double quantity = 1;

    cout << "Пожалуйста, введите сумму"
        <<" и валюту (r-рубли или g-гривны или u-юани или e-евро или f-фунты):\n";
    
    cin >> quantity >> unit;

    switch (unit) {
    case 'r':
        cout << quantity << " rub == "
            << quantity * rub_per_dollar << " usdt\n";
        break;   
    case 'g':
        cout << quantity << " griv == "
            << quantity * griv_per_dollar << " usdt\n";
        break;
    
    case 'u':
        cout << quantity << " uan == "
            << quantity * uan_per_dollar << " usdt\n";
        break;
    case 'e':
        cout << quantity << " euro == "
            << quantity * euro_per_dollar << " usdt\n";
        break;
    case 'f':
        cout << quantity << " funt == "
            << quantity * funt_per_dollar << " usdt\n";
        break;
    default:
        cout << "Извините , ошибка!\n";
        break;
    }



    #include<iostream>
using namespace std;
#include "std_lib_facilities.h"

// улучшенный код перебора значений
constexpr int ALPHABET_SIZE = 26;
constexpr char FIRST_LETTER = 'a';

int main()
{
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        char letter = FIRST_LETTER + i;
        int ascii_code = FIRST_LETTER + i;
        std::cout << letter << "\t" << ascii_code << "\n"; 
    }
    return 0;
}



int square(int a)
{
    int result = 0;
    for (int i = 0; i < a; ++i) {
        result += a;
    }

    return result;
}


int main()
{
    cout << square(2) << "\n";
    cout << square(10) << "\n";

}




    vector<double> temps;
    for (double temp; cin >>temp; ) // чтение в temp
        temps.push_back(temp); //вносим темп в вектор 

    // Вычислление средней температуры 
    double sum = 0;
    for (int x : temps) sum += x; 
    cout << "Средняя температура: "
        << sum/temps.size() << '\n';
    
    // Вычисление медианы температуры 
    sort(temps); // сортировка вектора температуры 
    cout << "Медианная температура: "
        << temps[temps.size()/2] << '\n';









bool is_in_vector(const string& word,  const vector<string>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == word) return true;
    }
    return false;
}


    vector<string> disliked = {"Broccoli", "Banana", "Apple"};
//Простой словарь, список упорядоченных слов 
    vector<string> words;
    for (string temp; cin >> temp; ) // чтение слов, разделенынми пробелами
        words.push_back(temp);
    cout << "Колличество слов: " << words.size() << '\n';

    sort(words);
    for (int i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i-1] != words[i]) { // проверка на повторение
            if (is_in_vector(words[i], disliked)) {
                cout << "BLEEP" << '\n';
            } else {
                cout << words[i] << '\n';
            }
        }
    }


    // Задания

int main()
{
    double a, b;
    while (cin >> a >> b) {
        cout << a << " и " << b << '\n';

        double diff = abs(a-b); // разница между числами 
        if (diff < 0.01) {
            cout << "Числа почти равны \n";
        }
        else if (a == b) {
            cout << "Числа равны\n";
        }
        else {
        
            if (a < b) {
                cout << "Наименьшее значение равно: " << a << '\n';
            }
            else {
                cout << "Наименьшее значение равно: " << b << '\n';
            }
            if (a > b) {
                cout << "Наибольшее значение: " << a << '\n';
            }
            else {
                cout << "Наибольшее значение: " << b << '\n';
            }
        }
    }
    cout << "Программа завершена\n"; 
}       
    
// 9 -11 
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>


// функция преобразования в см 
double to_m (double value, string unit) {
    if (unit == "m") return value;
    if (unit == "cm") return value / 100;
    if (unit == "in") return value * 0.0254;
    if (unit == "ft") return value * 0.3048;
    return -1;  // неизвестная единица 
}
// функция для вывода вектора
void print_vector(const vector<double>& vec) {
    cout << "Все введенные значения (в метрах): \n";
    for (double value : vec) {
        cout << value << "m\n";
    }
}




int main()
{
    vector<double> all_nums;
    double num;
    string unit; 
    //Считыавем первое число
    
    if (!(cin >> num >> unit)) {
        cout << "Нет чисел\n";
        return 0;
    }

    double value_cm = to_m(num, unit);

    cout << num << unit <<"\n";
    double min_val = value_cm; 
    double max_val = value_cm;
    all_nums.push_back(value_cm);
    double sum = value_cm; 
    int amount = 1;

    // теперь считываеи остальные 
    while (cin >> num >> unit) {
        
        value_cm = to_m(num, unit);

        if (value_cm < 0) {
            cout << "Единица измерения отклонена ";
            continue;
        }
        cout << num << unit << '\n';
        if (value_cm < min_val) {
            min_val = value_cm;
            cout << "Наименьшее среди введенных значений " << min_val << "\n";
        }
        if (value_cm > max_val) {
            max_val = value_cm;
            cout << "Наибольшее среди введенных значений " << max_val << "\n";
        }
        all_nums.push_back(value_cm);
        sum+=value_cm;
        ++amount;
    }
    sort(all_nums);
    print_vector(all_nums);

    cout << "Кол-во введенных значений: " << amount << "\n";
    cout << "Их сумма будет: " << sum << "\n"; 
    cout << "Наименьшее значение " << min_val << "m\n";
    cout << "Наибольшее значение " << max_val << "m\n";
    cout << "Программа завершена\n"; 
}       