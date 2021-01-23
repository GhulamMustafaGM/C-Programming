// convert string to int

#include <iostream>
using namespace std;

int toInt(string num)
{
    int total = 0;
    int mult = 1;
    int curNum;

    for (int i = 0; i < num.length(); i++)
    {
        mult = 1;
        curNum = 0;

        switch (num[i])
        {
        case '0':
            curNum = 0;
            break;

        case '1':
            curNum = 1;
            break;

        case '2':
            curNum = 2;
            break;

        case '3':
            curNum = 3;
            break;

        case '4':
            curNum = 4;
            break;

        case '5':
            curNum = 5;
            break;

        case '6':
            curNum = 6;
            break;

        case '7':
            curNum = 7;
            break;

        case '8':
            curNum = 8;
            break;

        case '9':
            curNum = 9;
            break;
        }

        for (int j = i; j < num.length() - 1; j++)
        {
            mult *= 10;
        }

        total += (mult * curNum);
    }

    return total;
}

int main()
{
    string input;
    cin >> input;

    cout << "Converted string to int: " << endl
            << toInt(input) << endl
            << "Original: " << endl
            << input;

    return 0;
}