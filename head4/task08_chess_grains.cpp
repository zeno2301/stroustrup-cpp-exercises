// Задача 8: Зерна на шахматной доске
#include <iostream>
using namespace std;

int main() {
    const int TOTAL_SQUARES = 64;
    const int TARGET_THOUSAND = 1000;
    const int TARGET_MILLION = 1000000;
    const int TARGET_BILLION = 1000000000;

    int square_for_thousand = 0;
    int square_for_million = 0;
    int square_for_billion = 0;

    long long grains = 1;
    
    cout << grains << " зерен на клетке 1\n";

    for (int square = 2; square <= TOTAL_SQUARES; square++) {
        grains *= 2;
        cout << grains << " зерен на клетке " << square << "\n";

        if (grains >= TARGET_THOUSAND && square_for_thousand == 0) {
            square_for_thousand = square;
        }
        if (grains >= TARGET_MILLION && square_for_million == 0) {
            square_for_million = square;
        }
        if (grains >= TARGET_BILLION && square_for_billion == 0) {
            square_for_billion = square;
            break;
        }
    }

    cout << "\n--- Результаты ---\n";
    cout << "Для 1,000 зерен нужно " << square_for_thousand << " клеток\n";
    cout << "Для 1,000,000 зерен нужно " << square_for_million << " клеток\n";
    cout << "Для 1,000,000,000 зерен нужно " << square_for_billion << " клеток\n";

    return 0;
}
