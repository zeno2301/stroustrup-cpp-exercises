#include <iostream>
#include <vector>
using namespace std; 
#include "std_lib_facilities.h"

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main()
{
    try {
        double c = 0;
        cin >> c;
        double k = ctok (c);
        cout << k << '\n';
        if (c < - 273.15) throw out_of_range("температура ниже допустимой");
        cout << k << '\n';
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
    }

}