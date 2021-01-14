// Letter reciprocal

#include <iostream>
using namespace std;

int contcomp(char e, string str)
{ // Function count the character in the string ABC or abc to know the position on the abecedary
    int i;
    for (i = 0; i < str.size() && e != str[i]; i++)
        ;
    return i;
}

void reciprocal(string &e)
{

    string abc = "abcdefghijklmnopqrstuvwxyz";
    string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < e.size(); i++)
    {
        if (e[i] >= 'a' && e[i] <= 'z')
            e[i] = abc[25 - contcomp(e[i], abc)];

        if (e[i] >= 'A' && e[i] <= 'Z')
            e[i] = ABC[25 - contcomp(e[i], ABC)];
    }
}

int main()
{
    string letter;
    getline(cin, letter);
    reciprocal(letter);
    cout << letter;
    return 0;
}
