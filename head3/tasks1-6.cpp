#include<iostream>
using namespace std;
#include "std_lib_facilities.h"

int main()
{
    char first_name[30]; // имя юзера
    char friend_name [30]; // имя друга
    char affairs[40]; // дела 
    char answer; // f or m 
    int age;
    char ur_name[30];

    cout << "Введите свое имя ";
    cin >> ur_name;

    cout << "Привет!"; 
    cout << "Как твои дела ?\n";
    cin >> affairs;
    
    cout << "Введите имя адресата: ";
    cin >> first_name;
    cout << "Введите возраст адресата ";
    cin >> age;

    cout << "\n Я слышал, ты только что отметил день рождения и тебе исполнилось " << age << " лет.\n";
    if (age < 12) {
        cout << "На следующий год тебе исполнится " << age + 1 << " лет";
    } 
    else if (age == 17){
        cout << "В следующем году ты сможешь голосовать "; 
    }
    else if (age > 70){
        cout << "Надеюсь, что ты не скчуаешь на пенсии "; 
    }



    if (age >= 110) {
        simple_error("Ты шутишь!");
    }

    




    cout << "Дорогой, " << first_name <<" ,\n";
    cout << "У меня все " << affairs << " . Я скучаю по тебе. \n";
    cout << "Кстати, помнишь нашего друга с Анапы, давно ли ты встречал его?" << "\n"; 
    cout << "Ты имеешь ввиду ";
    cin >> friend_name;
    cout << "Да, я встречал его. Он очень красивый.\n";
    cout << "Да, я имею ввиду " << friend_name << "\n";

    cout << "пол друга ксати одной буквой будет ";
    cin >> answer;

    if (answer == 'f') {
        cout <<"Если ты увидишь" << friend_name << " пожалуйста, попроси ее позвонить мне. \n"; 
    }
    else if (answer == 'm') {
        cout << "Если ты увидишь" << friend_name << " пожалуйста, попроси его позвонить мне. \n";
    } 
    else {
        cout << "ошибка\n";
    }

    cout << "Искренне твой\n\n" << ur_name << endl       ;

    


}