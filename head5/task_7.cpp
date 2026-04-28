#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"




int main() 
{
    try {
        double a = 0, b = 0, c = 0;

        cout << "Enter a: "; cin >> a;
        cout << "Enter b: "; cin >> b;
        cout << "Enter c: "; cin >> c;

        double d = b * b - 4 * a * c;
        if (d < 0) throw invalid_argument("ДИСКРИМИНАНТ МЕНЬШЕ 0!!!");
        double x1 = ((-b + d)/ (2 * a));
        double x2 = ((-b - d)/ (2 * a));

        cout << "x1 = " << x1 << '\n';
        cout << "x2 = " << x2 << '\n';

        // проверка 
        cout << "Проверка\n";
        cout << "Подставим x1: " <<  a * x1 * x1 + b * x1 + c << " = 0 " << '\n';
        cout << "Подставим x2: " <<  a * x2 * x2 + b * x2 + c << " = 0 " << '\n';


    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
}