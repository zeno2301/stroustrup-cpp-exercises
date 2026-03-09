// Задача 10: Игра "Камень, ножницы, бумага"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> bot_moves = {"rock", "paper", "scissors", "paper", "scissors", "paper", "scissors"};
    
    int start_index;
    cout << "Введите магическое число (0-" << bot_moves.size()-1 << "): ";
    cin >> start_index;

    if (start_index < 0 || start_index >= bot_moves.size()) {
        cout << "Неверный индекс!\n";
        return 1;
    }

    cout << "Введите: rock, paper или scissors\n";

    for (size_t i = start_index; i < bot_moves.size(); i++) {
        string player_move;
        cout << "\nВаш ход: ";
        cin >> player_move;

        int choice = 0;
        if (player_move == "rock") choice = 1;
        else if (player_move == "paper") choice = 2;
        else if (player_move == "scissors") choice = 3;

        cout << "Бот выбрал: " << bot_moves[i] << "\n";

        switch (choice) {
            case 1: // rock
                if (bot_moves[i] == "paper") cout << "Вы проиграли!\n";
                else if (bot_moves[i] == "scissors") cout << "Вы выиграли!\n";
                else cout << "Ничья!\n";
                break;
            case 2: // paper
                if (bot_moves[i] == "scissors") cout << "Вы проиграли!\n";
                else if (bot_moves[i] == "rock") cout << "Вы выиграли!\n";
                else cout << "Ничья!\n";
                break;
            case 3: // scissors
                if (bot_moves[i] == "rock") cout << "Вы проиграли!\n";
                else if (bot_moves[i] == "paper") cout << "Вы выиграли!\n";
                else cout << "Ничья!\n";
                break;
            default:
                cout << "Неверный ход!\n";
        }
    }

    return 0;
}
