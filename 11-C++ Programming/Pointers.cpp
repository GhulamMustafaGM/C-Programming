// More on pointers answer

/* Goal: Find out why you care about pointers*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *pointerI;
    int number;

    char character;
    char *pointerC;

    string sentence;
    string *pointerS;

    pointerI = &number;
    *pointerI = 45;

    pointerC = &character;
    pointerC = 'f';

    pointerS = &sentence;
    *pointerS = "Hey look at me, I know pointers!";

    cout << "number = " << number << endl;
    cout << "character = " << character << endl;
    cout << "sentence = " << sentence << endl;

    return 0;
}

/* output 

number = 45
character = f
sentence = Hey look at me, I know pointers!

*/