// String compression

#include <iostream>
#include <string.h>
using namespace std;

string To_String(int n)
{

    int rem;
    string res = "";

    while (n)
    {
        rem = n % 10;
        n = n / 10;
        switch (rem)
        {
        case 0:
            res = "0" + res;
            break;
        case 1:
            res = "1" + res;
            break;
        case 2:
            res = "2" + res;
            break;
        case 3:
            res = "3" + res;
            break;
        case 4:
            res = "4" + res;
            break;
        case 5:
            res = "5" + res;
            break;
        case 6:
            res = "6" + res;
            break;
        case 7:
            res = "7" + res;
            break;
        case 8:
            res = "8" + res;
            break;
        case 9:
            res = "9" + res;
            break;
        }
    }

    return res;
}

string Compress(string t)
{
    int i;
    int cnt = 1;
    string res = "";
    int ln = t.length();
    for (i = 0; i < ln; i++)
    {
        while (t[i] == t[i + 1])
        {
            cnt++;
            i++;
        }
        if (cnt > 1)
        {
            res += t[i - 1];
            res += To_String(cnt);
            cnt = 1;
        }
        else
        {
            res += t[i];
        }
    }

    return res;
}

int main()
{

    string str;

    // read the message
    getline(cin, str);

    // print the original message
    cout << "The origin message:" << endl;
    cout << "    > " << str;

    //print the number of vowels
    cout << "\n\nThe compressed string:\n";
    cout << "   >> ";

    //call the function to show vowelCount
    cout << Compress(str);

    cout << "\n\n";
    cout << "Thanks for your ";
    cout << "caring...\n\n          ";
    cout << "=======================";
    cout << "\n\nRegards,\nMohammad";

    return 0;
}