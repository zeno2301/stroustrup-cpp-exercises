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


// Задачи 1-2 
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>




int main()
{   
    vector<double> temps; 
    for (double temp; cin >> temp; ) {  // чтение в вектор 
        temps.push_back(temp); // внесение в вектор 
    }

    // вычисление средней температуры 
    double sum = 0;
    for (double x : temps) {
        sum += x; 
    }
    cout << "Средняя температура: "
        << sum / temps.size() << "\n";

    // Вычисление медианы температуры

    sort(temps); // сортируем вектор 
    int mid = temps.size() / 2; 
    if (temps.size()%2 == 0) {
        cout << "Медианная температура: " << (temps[mid-1] + temps[mid]) / 2.0 << "\n"; 
        
    }
    else {
        cout << "Медианная температура: " 
            << temps[mid] << "\n";
    }
    
// задача 3 

int main()
{   
    vector<double> length;
    for (double len; cin >> len; ) { // считываем числа в вектор
        length.push_back(len);
    }
    double sum = 0;
    double min = length[0];
    double max = length[0];
    int i = 0;
    double mid;
    while (i < length.size()) {
        sum += length[i];
        if (min > length[i]) {
            min = length[i];
        }
        if (max < length[i]) {
            max = length[i];
        }
        ++i;
    }
    mid = sum / length.size();

    cout << "Сумма всех расстояний будет " << sum <<'\n';
    cout << "Минимальное расстояние между двумя городами будет " 
        << min << '\n';
    cout << "Максимальное расстояние между двумя городами будет "
        << max << '\n';

    cout << "Средним значением всех расстояний будет " << mid << '\n'; 


}


// tasks 4 
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>




int main()
{   
    cout << "Загадайте число от 0 до 100 \n";
    cout << " Я его угодаю, отвечайте или (да) или (нет)";
    int low = 0;
    int hight = 100; 
    int i = 0;

    while (low < hight) {
        int mid = (low + hight) / 2;
        
        string answer;

        cout << "Ваше число  " << mid << "? ";
        cin >> answer;
        ++i;

        if (answer == "да") {
            hight = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << "\nВаше число: " << low << '\n';
    cout << "Попыток: " << i << '\n';

}

// task 5 
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>




int main()
{   
    double first_num = 0;
    double second_num = 0;
    char sign; 
    cout << "Введите два числа : ";
    cin >> first_num >> second_num;
    cout << "Введите знак операции(+ , - , / *): ";
    cin >> sign;

    if (sign == '+') {
        double sum = first_num + second_num;
        cout << "Сумма " << first_num << " и " << second_num << " равна " << sum <<'\n';
    }
    else if (sign == '-') {
        double diff = first_num - second_num; 
        cout << "Разность " << first_num << " и " << second_num << " равна " << diff << '\n';
    }
    else if (sign == '/') {
        if (second_num  == 0) {
            cout << "На ноль делить нальзя " << '\n';
        }
        else {
            double quotient = first_num / second_num;
            cout << "Частное " << first_num << " и " << second_num << " равно " << quotient << '\n';  
        }
    }
    else if (sign == '*') {
        double prod = first_num * second_num;
        cout << "Произведение " << first_num << " и " << second_num << " равно " << prod << '\n';
    }
    else {
        cout << "Вы ошиблись " << '\n'; 
    }
}

// task 6 

int main()
{   
    vector<string> word_nums = {"Zero", "One" , "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int num = 0;
    string nums;
    cin >> num;
    for (int i = 0; i < 10; ++i) {
        if (num == i) {
            cout << word_nums[i] << '\n';
            break;
        }
    }
    cin >> nums;
    for (int i = 0; i < 10; ++i) {
        if (nums == word_nums[i]) {
            cout << i << '\n';
            break;
        }
    }
}
// task 7, 
//!!! ПЕРЕПИСАТЬ, как пройду функции

int main()
{   
    string num;
    vector<string> word_nums = {"Zero", "One" , "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    double first_num = 0;
    double second_num = 0;
    char sign; 
    string answer;
    cout << "Числа которые вы хотите ввести больше десяти( no , yes): " << '\n';
    cin >> answer;
    if (answer == "no") {
        int first_word_num = 0;
        int second_word_num = 0;
        cout << "Введите первое число: ";
        cin >> num;
        for(int i = 0; i < word_nums.size(); ++i) {
            if (num == word_nums[i]) {
                first_word_num += i;
            }
        }
        cout << "Введите второе число: "; 
        cin >> num;
        for (int i = 0; i < word_nums.size(); ++i) {
            if (num == word_nums[i]) {
                second_word_num += i;
            }
        }
        cout << "Введите знак операции(+ , - , / *): ";
        cin >> sign;
        switch (sign) {
            case '+': 
                cout << "Сумма " << first_word_num << " и " << second_word_num << " равна " << first_word_num + second_word_num <<'\n';
                break;
            case '-':
                cout << "Разность " << first_word_num << " и " << second_word_num << " равна " << first_word_num - second_word_num << '\n';
                break;
            case '/':
                if (second_word_num != 0) {
                    cout << "Частное " << first_word_num << " и " << second_word_num << " равно " << first_word_num / second_word_num << '\n';
                }else {
                    cout << "На ноль делить нельзя!!!" << '\n';
                }
                break;
            case '*':
                cout << "Произведение " << first_word_num << " и " << second_word_num << " равно " << first_word_num * second_word_num << '\n';
                break;
            }


    }
    else {
        cout << "Введите два числа : ";
        cin >> first_num >> second_num;
        cout << "Введите знак операции(+ , - , / *): ";
        cin >> sign;

        if (sign == '+') {
            double sum = first_num + second_num;
            cout << "Сумма " << first_num << " и " << second_num << " равна " << sum <<'\n';
        }
        else if (sign == '-') {
            double diff = first_num - second_num; 
            cout << "Разность " << first_num << " и " << second_num << " равна " << diff << '\n';
        }
        else if (sign == '/') {
            if (second_num  == 0) {
                cout << "На ноль делить нальзя " << '\n';
            }
            else {
                double quotient = first_num / second_num;
                cout << "Частное " << first_num << " и " << second_num << " равно " << quotient << '\n';  
            }
        }
        else if (sign == '*') {
            double prod = first_num * second_num;
            cout << "Произведение " << first_num << " и " << second_num << " равно " << prod << '\n';
        }
        else {
            cout << "Вы ошиблись " << '\n'; 
        }
    }

}
// task 8 
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>




int main()
{   
    // всего клеток 
    int all_var = 64;
    // переменные для зерен
    int constexpr oneThausendGrains = 1000;
    int constexpr oneMillionGrains = 1000000;
    int constexpr oneBillionGrains = 1000000000;
    // переменные для клеток 
    int grainsMoreThausend = 0;
    int grainsMoreMillion = 0;
    int grainsMoreBillion = 0;
    // все зерна 
    int bothCase = 1;
    cout << bothCase << " зерен на 1 клетке\n ";
    for (int i = 2; i <= all_var; i++)   {
        bothCase *= 2;        
        cout << bothCase << " зерен на " << i << " клетке " << '\n';
        if (bothCase >= oneThausendGrains &&  grainsMoreThausend == 0) {
            grainsMoreThausend = i;
        }
        if (bothCase >= oneMillionGrains && grainsMoreMillion == 0) {
            grainsMoreMillion = i;
        }
        if (bothCase >= oneBillionGrains && grainsMoreBillion == 0) {
            grainsMoreBillion = i;
            break; 
        }
    }
    cout << '\n' << "-------------------------" << '\n';
    cout << "Чтобы получить 1000 зерен, то потребуется минимум " << grainsMoreThausend << " клеток \n";
    cout << "Чтобы получить 1.000.000 зерен, то потребуется минимум " << grainsMoreMillion << " клеток \n";
    cout << "Чтобы получить 1.000.000.000 зерен, то потребуется минимум " << grainsMoreBillion << " клеток \n";
    cout << "-------------------------" << '\n';
}

// task 9 - какоето проходное 

//task 10
#include<iostream>
using namespace std;
#include "std_lib_facilities.h"
#include <cmath>




int main()
{   
    // программа для игры в камень ножницы бумага 
    int choices = 0;
    vector<string> botMotion = {"rock", "paper", "scissors", "paper", "scissors", "paper", "scissors"};
    string playerMotion;
    size_t countOfMotion = botMotion.size();
    int i = 0;
    cout << "Введите магическое число -> от 0 до " << countOfMotion-1 << ":  ";
    cin >> i;
    cout << "Введите: (rock) , (paper), (scissors) \n";
    for(; i < countOfMotion; ++i){
        cout << "Ваш ход: ";
        cin >> playerMotion;        
        if (playerMotion == "rock") choices = 1;
        else if (playerMotion == "paper") choices = 2;
        else if (playerMotion == "scissors") choices = 3;

        switch (choices) {
            case 1:
                if (botMotion[i] == "paper") {
                    cout << "Мой ход: бумага\nТЫ проиграл!!!\n";
                }
                else if (botMotion[i] == "scissors") {
                    cout << "Мой ход: ножницы\nТЫ выиграл!!!\n";
                }
                else {
                    cout << "Мой ход: камень\nНИЧЬЯ\n";
                }
                break;
            case 2:
                if (botMotion[i] == "scissors") {
                    cout << "Мой ход: ножницы\nТЫ проиграл!!!\n";
                }
                else if (botMotion[i] == "rock") {
                    cout << "Мой ход: камень\nТЫ выиграл!!!\n";
                }
                else {
                    cout << "Мой ход: бумага\nНИЧЬЯ\n";
                }
                break;
            case 3:
                if (botMotion[i] == "rock") {
                    cout << "Мой ход: камень\nТЫ проиграл!!!\n";
                }
                else if (botMotion[i] == "paper") {
                    cout << "Мой ход: бумага\nТЫ выиграл!!!\n";
                }
                else {
                    cout << "Мой ход: ножницы\nНИЧЬЯ!!!\n";
                }
                break;
            default:
                cout << "Ошибка\n";
                break;
        }
    }



}

// task 11-12

// проверяет является ли число простым
bool simpleNums(int num, vector<int>& myVec) {
    if (num <= 1) return false;
    if (num == 2) return true;
 
    
    for (int x: myVec) {
        if (x * x > num) break;
        if (num%x == 0) return false;
    }
    return true;
    
}

int main()
{   
    int max = 0;
    cout << "Введите число до которого будет диапазон:\n ";
    cin >> max;


    // простое чило q это,  q > 1 && q%q == 0 && q%2 == 0
    // дапазон от 1 до 100 
    vector<int> nums;
    nums.push_back(2);
    for (int i = 3; i < max; ++i) {
        if (simpleNums(i, nums)) {
            nums.push_back(i);
        }
    }

    for (int x: nums) {
        cout << x << " ";
    }
    cout << "\n";

}


// task 13

#include<iostream>
using namespace std;
#include <vector>
#include <cmath>




int main() 
{
    vector<bool> nums(101,true); // ииндексы 0 - 100 
    nums[0] = false;
    nums[1] = false;
    
    for (int i = 2; i*i <= 100; ++i) {
        if (nums[i] == true) {
            for (int j = 2; i*j <= 100; ++j) {
                int multy = 0;
                multy = i * j;
                nums[multy] = false;
            }
        }
    }
    //  выводим элементы 
    for (int i = 0; i <= 100; ++i) {
        if (nums[i] == true) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// task 14 
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>




int main() 
{
    int max = 0;
    cout << "Введите число которое будет максимальным диапазоне "; 
    cin >> max;

    vector<bool> nums(max+1,true); // ииндексы 0 - 100 
    nums[0] = false;
    nums[1] = false;
    
    for (int i = 2; i*i <= max; ++i) {
        if (nums[i] == true) {
            for (int j = 2; i*j <= max; ++j) {
                int multy = 0;
                multy = i * j;
                nums[multy] = false;
            }
        }
    }
    //  выводим элементы 
    
    for (int i = 0; i <= max; ++i) {
        if (nums[i] == true) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// task 15 
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; 

    for (int i = 3; i*i <= 100; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
} 



int main() 
{
    int n = 0;
    cout << "Сколько простых чисел вы хотите увидеть? \n";
    cin >> n;
    int num = 0;
    int countSimpleNums = 0;

    while (countSimpleNums < n) {
        if (isPrime(num) == true) {
            cout << num << " ";
            countSimpleNums++;
        }
        num++;
    }

}

// task 16

        #include<iostream>
using namespace std;
#include <vector>
#include <cmath>

//функция для поиска моды (получаем вектор, отдаем моду) 
int fashionNumber(vector<int>& myVec, int sizeVector) {
    int max_count = 0; 
    int mode = 0;
    
    for (int i = 0; i < sizeVector; i++) {
        int count = 0;
        int current_num = myVec[i];

        for (int j = 0; j < sizeVector; j++) {
            if (myVec[j] == current_num) count++;

        }
        if (count > max_count) {
            max_count = count;
            mode = current_num;
        }
    }
    return mode;
}



int main() 
{
// найти моду чисел - число которое повторяется чаще всего 
    vector<int> plenty = {3, 5, 6, 6, 3 , 2, 1, 2, 3, 5}; // вот последлвательность 
    size_t sizePlenty = plenty.size();

    int mode = fashionNumber(plenty, sizePlenty);
    cout << "Мода " << mode << endl;
}

// task 17 
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

//функция для поиска моды (получаем вектор, отдаем моду) 
string modeWord(vector<string>& myVec, int sizeVector) {
    int max_count = 0; 
    string mode;
    
    for (int i = 0; i < sizeVector; i++) {
        int count = 0;
        string current_word = myVec[i];

        for (int j = 0; j < sizeVector; j++) {
            if (myVec[j] == current_word) count++;

        }
        if (count > max_count) {
            max_count = count;
            mode = current_word;
        }
    }
    return mode;
}

// Функции для поиска максимума и минимум
string maxWord(vector<string>& myVec, int sizeVector) {
    string now_max_word = myVec[0];

    for (int i = 1; i < sizeVector; i++) {  // Начинаем с i=1, т.к. [0] уже взяли
        if (myVec[i] > now_max_word) {
            now_max_word = myVec[i];
        }
    }
    return now_max_word;
}



string minWord(vector<string>& myVec, int sizeVector) {
    string now_min_word = myVec[0];

    for (int i = 1; i < sizeVector; i++) {  // Начинаем с i=1, т.к. [0] уже взяли
        if (myVec[i] < now_min_word) {
            now_min_word = myVec[i];
        }
    }
    return now_min_word;
}




int main() 
{
// найти моду чисел - число которое повторяется чаще всего 
    vector<string> plenty = {"cat", "dog", "pig", "horse", "dog", "dog", "parrot", "pig", "monkey", "cat"}; // вот последлвательность 
    size_t sizePlenty = plenty.size();

    string min_word = minWord(plenty,sizePlenty);
    string max_word = maxWord(plenty, sizePlenty);
    string mode = modeWord(plenty, sizePlenty);
    cout << "Мода " << mode << endl;
    cout << "Максимум " << max_word << "\nМинимум " << min_word << endl; 
}

// task 18 
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

// функция квадрата 
double squareOfNumb(double number) {
    return number*number;
}

//функция корня


// функция дискриминанта 
double discriminantOfEquation(double part_a, double part_b, double part_c) {
    double discriminant = 0;
    discriminant = squareOfNumb(part_b) - 4 * part_a * part_c;

    return discriminant;
}



int main() 
{
    // ax**2 + b + c = 0
    double part_a = 0;
    double part_b = 0;
    double part_c = 0;

    //ввод пользователя
    cout << "ax**2 + bx + c = 0\n";
    cout << "Введите коэф a: ";
    cin >> part_a;
    cout << "Введите коэф b: ";
    cin >> part_b;
    cout << "Введите коэф c: ";
    cin >> part_c;


    double discriminant = discriminantOfEquation(part_a, part_b, part_c);
    if (discriminant > 0) {
        double answer_x_1 = (-part_b + sqrt(discriminant)) / (2 * part_a);
        double answer_x_2 = (-part_b - sqrt(discriminant)) / (2 * part_a); 
        
        cout << "Корнями уравнения " << part_a << "x**2 +" << part_b << " + " << part_c << endl;
        cout << "Будет  X1= " << answer_x_1 << " X2 = " << answer_x_2 << "\n";
    
    }
    else if (discriminant == 0) {
        double answer_x_1 = (-part_b + sqrt(discriminant)) / (2 * part_a);
        double answer_x_2 = (-part_b - sqrt(discriminant)) / (2 * part_a); 

        cout << "Корнями уравнения " << part_a << "x**2 +" << part_b << " + " << part_c << endl;
        cout << "Будет  X " << answer_x_1 << "\n";
    }
    else {
        cout << "Нет действительных корней\n";
    }


}

// task 19
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

bool addNameScore(vector<string>& names, vector<int>& scores, int score, string name) {
   
   if (name == "NoName" && score == 0) {
      return false;
   }

   for (const string& existing_name : names) {
      if (existing_name == name) {
         cout << "Ошибка: " << name << " повторяется\n";   
         return false;
      }
   }
   return true;
}


int main() 
{
   vector<string> names;
   vector<int> scores; 

   
   
   while (true) {
      cout << "Введите Имя и число: \n";
      string name;
      int score = 0;
      cin >> name >> score;
      if(addNameScore(names, scores, score, name) == true) {
         names.push_back(name);
         scores.push_back(score);
      }
      else {
         break;
      }

   }

   cout << "\nВсе пары:\n";
   for (size_t i = 0; i < names.size(); ++i) {
      cout << names[i] << " " << scores[i] << "\n";
   }
   cout << endl;
      
   
}

// taska 20 
#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

bool addNameScore(vector<string>& names, vector<int>& scores, int score, string name) {
   
   if (name == "NoName" && score == 0) {
      return false;
   }

   for (const string& existing_name : names) {
      if (existing_name == name) {
         cout << "Ошибка: " << name << " повторяется\n";   
         return false;
      }
   }
   return true;
}


int main() 
{
   vector<string> names;
   vector<int> scores; 

   
   
   while (true) {
      cout << "Введите Имя и число: \n";
      string name;
      int score = 0;
      cin >> name >> score;
      if(addNameScore(names, scores, score, name) == true) {
         names.push_back(name);
         scores.push_back(score);
      }
      else {
         break;
      }

   }

   cout << "\nВсе пары:\n";
   for (size_t i = 0; i < names.size(); ++i) {
      cout << names[i] << " " << scores[i] << "\n";
   }
   cout << endl;
   string name_2;
   cout << "Чтобы посмотреть баллы, введите имя: \n";
   cin >> name_2;
   bool found = false; // флаг 
   for (size_t i = 0; i < names.size(); ++i) {
      if (name_2 == names[i]) 
      {
         cout << "Ваши быллы " << scores[i] << "\n";
         found = true;
         break;
      }
   }
   if (!found) {
      cout << "Имя не найдено\n"; 
   }
   
}

// task 21

#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

bool addNameScore(vector<string>& names, vector<int>& scores, int score, string name) {
   
   if (name == "NoName" && score == 0) {
      return false;
   }

   for (const string& existing_name : names) {
      if (existing_name == name) {
         cout << "Ошибка: " << name << " повторяется\n";   
         return false;
      }
   }
   return true;
}


int main() 
{
   vector<string> names;
   vector<int> scores; 

   
   
   while (true) {
      cout << "Введите Имя и число: \n";
      string name;
      int score = 0;
      cin >> name >> score;
      if(addNameScore(names, scores, score, name) == true) {
         names.push_back(name);
         scores.push_back(score);
      }
      else {
         break;
      }

   }

   cout << "\nВсе пары:\n";
   for (size_t i = 0; i < names.size(); ++i) {
      cout << names[i] << " " << scores[i] << "\n";
   }
   cout << endl;
   int score_2;
   cout << "Чтобы посмотреть результаты, введите баллы: \n";
   cin >> score_2;
   bool found = false; // флаг 
   for (int i = 0; i < names.size(); ++i) {
      if (score_2 == scores[i]) 
      {
         cout << names[i] << "\n";
         found = true;
      }
   }
   if (!found) {
      cout << "баллы не найдены\n"; 
   }
   
}

