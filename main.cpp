#include<iostream>
using namespace std;
#include "std_lib_facilities.h"


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