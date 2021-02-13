
// array : delete all occurrences

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char letter, phrase[30];
    int count = 0;

    cout << "Enter the string:" << endl;
    cin.get(phrase, 30);

    cin.get(); //In order to let enter the next cin.

    cout << "Enter a letter:" << endl;
    cin >> letter;

    cout << "The length of the string before deletion:" << strlen(phrase) << endl;

    char l = tolower(letter);
    char u = toupper(letter);

    // You can put this in a function easily just too lazy to do it !.

    for (int i = 0; i < strlen(phrase); i++)
    {
        if (letter == phrase[i] || u == phrase[i] || l == phrase[i])
        {
            for (int n = i; n < strlen(phrase); n++)
                phrase[n] = phrase[n + 1];
            i--;
        }
    }

    cout << "The  string after the deleting the char '" << letter << "':" << phrase << endl;
    cout << "The length of the string after deletion:" << strlen(phrase) << endl;
}