int main()
{

// номер 2 МИЛИ В КИЛЛОВМЕТРЫ 
double miles = 0;
double kilo = 0;
cout << "Введите кол-во миль которые хотите перевести: ";
cin >> miles;
kilo = miles * 1.609; 
cout << "В " << miles << " милях, будет " << kilo << " киллометров\n"; 

// номер 4 
double val1 = 0; 
double val2 = 0;
double sum = 0; 
double rasn = 0;
double mult = 0;
double chast = 0;
cout << "Введите два числа с плавающей точкой ";
cin >> val1 >> val2;
if (val1 > val2) {
    cout << "Найбольшее значение это " << val1;
}
else {
    cout << "Наибольшее значение это " << val2;
}
sum = val1 + val2;
rasn = val1 - val2;
mult = val1 * val2;
rasn = val1 / val2; // номер 5 разлчие у чисел без плавающей точки будет отброшена мантиса 

// номер 6 Введите три целых числа в порядке возрастания через запятую 
int num1 = 0;
int num2 = 0;
int num3 = 0; 

cout << "Введите три целых числа ";
cin >> num1 >> num2 >> num3; 

if (num1 <= num2 && num1 <= num3){
    cout << num1 << " , ";
    if (num2 <= num3){
        cout << num2 << " , " << num3 << "\n";
    }
    else {
        cout << num3 << " , "<<num2 << "\n";
    }
}
else if (num2 <= num1 && num2 <= num3){
    cout << num2 << " , ";
    if (num1 <= num3){
        cout << num1 << " , " << num3 << "\n";
    }
    else {
        cout << num3 << " , " << num1 << "\n";
    }
}
else if (num3 <= num1 && num3 <= num2){
    cout << num3 << " , ";
    if (num1 <= num2) {
        cout << num1 << " , " << num2 << "\n";
    }
    else{
        cout << num2 << " , " << num1 << "\n";
    }
}

// номер 7 
string word1, word2, word3;

cout << "Введите три слова ";
cin >> word1 >> word2 >> word3;
if (word1 <= word2 && word1 <= word3){
    cout << word1 << " , ";
    if (word2 <= word3){
        cout << word2 << " , " << word3 << "\n";
    }
    else {
        cout << word3 << " , "<< word2 << "\n";
    }
}
else if (word2 <= word1 && word2 <= word3){
    cout << word2 << " , ";
    if (word1 <= word3){
        cout << word1 << " , " << word3 << "\n";
    }
    else {
        cout << word3 << " , " << word1 << "\n";
    }
}
else if (word3 <= word1 && word3 <= word2){
    cout << word3 << " , ";
    if (word1 <= word2) {
        cout << word1 << " , " << word2 << "\n";
    }
    else{
        cout << word2 << " , " << word1 << "\n";
    }
}

// номер 8

    int num1;
    cout << "Введите число: ";
    cin >> num1;    
    
    if (num1 % 2 == 0){
        cout << "Число " << num1 << " является четным\n";
    }
    else {
        cout << "Число " << num1 << " является нечетным\n";
    }

    // номер 9
    string word;

    cin >> word;
    if (word == "нуль"){
        cout << 0 << "\n";
    }
    else if (word == "один"){
        cout << 1 << "\n";
    }
    else if (word == "два"){
        cout << 2 << "\n";
    }
    else if (word == "три"){
        cout << 3 << "\n";
    }
    else if (word == "четыре"){
        cout << 4 << "\n";
    }
    else {
        cout << "Я не знаю такого числа\n";
    }

    //номер 10 
       string operation;
    double num1;
    double num2;

    cout << "Введите символ операции\n ";
    cin >> operation;

    cout << "Введите два числа над которыми будут вычисления ";
    cin >> num1 >> num2;
    
    if (operation == "+" || operation == "plus"){
        cout << num1 + num2 << endl;
    }
    else if (operation == "-" || operation == "minus" ){
        cout << num1 - num2 << endl;
    }
    else if (operation == "*" || operation == "mul"){
        cout << num1 * num2 << endl;
    }
    else if (operation == "/" || operation == "div"){
        cout << num1 / num2 << endl;
    }
    else {
        cout << "Операция не известна ";
    }

     // номер 11 (пишу как сеньор)


     #include<iostream>
using namespace std;
#include "std_lib_facilities.h"


// константы 
constexpr int CENT_PER_DOLLAR = 100;
    

// Функция для окончания 
string get_plural_form(int count) {
    int last_digit = count % 10;
    int last_two = count % 100;
        
    if (last_two >= 11 && last_two <= 14) return "монет";
    if (last_digit == 1) return "монета";
    if (last_digit >= 2 && last_digit <= 4) return "монеты";
    return "монет";
}
    

int main()
{

    // инициализация переменных
    int one_cent = 0, five_cent = 0, ten_cent = 0;
    int twenty_five_cent = 0, fifty_cent = 0;

    // Ввод с проверкой 
    cout << "Сколько у вас одноцентовых монет? ";
    if (!(cin >> one_cent) || one_cent < 0) {
        cerr << "Ошибка ввода\n";
        return 1;
    } 

    cout << "Сколько у вас пятицентовых монет? ";
    if (!(cin >> five_cent) || five_cent < 0) {
        cerr << "Ошибка ввода\n";
        return 1;
    }

    cout << "Сколько у вас десятицентовых монет? ";
    if (!(cin >> ten_cent) || ten_cent < 0) {
        cerr << "Ошибка ввода\n";
        return 1;
    }

    cout << "Сколько у вас двадцатипятицентовых монет? ";
    if (!(cin >> twenty_five_cent) || twenty_five_cent < 0) {
        cerr << "Ошибка ввода\n";
        return 1;
    }

    cout << "Сколько у вас пятидесятицентовых монет? ";
    if (!(cin >> fifty_cent) || fifty_cent < 0) {
        cerr << "Ошибка ввода\n";
        return 1;
    }

    // Вывод с правильным окончанием 
    cout << "У вас " << one_cent << " одноцентовая " 
         << get_plural_form(one_cent) << "\n";
    
    cout << "У вас " << five_cent << " пятицентовая " 
         << get_plural_form(five_cent) << "\n";
    
    cout << "У вас " << ten_cent << " десятицентовая " 
         << get_plural_form(ten_cent) << "\n";
    
    cout << "У вас " << twenty_five_cent << " двадцатипятицентовая " 
         << get_plural_form(twenty_five_cent) << "\n";
    
    cout << "У вас " << fifty_cent << " пятидесятицентовая " 
         << get_plural_form(fifty_cent) << "\n";

    // Подсчет общей суммы
    int total_cents = one_cent * 1 + five_cent * 5 + ten_cent * 10 + 
                      twenty_five_cent * 25 + fifty_cent * 50;

    // Конвертация в доллары и центы
    int dollars = total_cents / CENT_PER_DOLLAR;
    int cents = total_cents % CENT_PER_DOLLAR;

    cout << "\nОбщая стоимость ваших монет равна " << total_cents << " центам\n";
    cout << "Это " << dollars << " долларов " << cents << " центов\n";

    return 0;
