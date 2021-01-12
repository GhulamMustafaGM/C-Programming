// vowel or const

#include <iostream>
using namespace std;
int main()
{
    // SIMPLE PROGRAM TO CHECK WHETHER A CHARACTER IS VOWEL OR A CONSTANT.

    char c;

    int Uppercase, lowercase;
    // In case tou don't know what is a vowel,a vowel is a character which is 'a' , 'e' , 'i' , 'o' , 'u'
    cin >> c;

    // EXAMPLE INPUT: 'a'

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // THIS 7 OF 30 DAILY CODES.TODAY IS 15 APRIL,2018

    Uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (Uppercase || lowercase)
    {
        cout << "Your character "
             << "'" << c << "'"
             << " is a vowel \n";
    }
    // Thanks for reading this,beautiful :)
    else
    {
        cout << "Your character "
             << "'" << c << "'"
             << "is a Constant \n  Try 'a' \n ";
    }

    cout << " \n \n This is 7th of 30 daily codes by me.You can suggest me projects or suggestions in the comment box ..\n That would be helpful,beautiful :) \n Anmol \n 15th April,2018 \n ";
    return 0;
}