// Word Frequency

#include <iostream>
using namespace std;

int main()
{
    string a; //main string
    getline(cin, a);
    string c; //string to compare
    getline(cin, c);

    int l = a.length();
    int i;
    int counter = 0;
    string b = "\0";

    i = 0;

    while (i < l)
    {
        while (a[i] != ' ' && i < l)
        {
            b += a[i];
            i++;
        }

        if (b == c)
        {
            counter++;
        }

        i++;
        b = "\0";
    }

    cout << counter;

    return 0;
}