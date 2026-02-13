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