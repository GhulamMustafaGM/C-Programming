
// Number to text converter

#include <iostream>
using namespace std;

void fromZeroToNine(int a)
{
    switch (a)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "forth";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    }
}

void fromTenToHundred(int a)
{
    switch (a)
    {
    case 2:
        cout << "twenty ";
        break;
    case 3:
        cout << "thirty ";
        break;
    case 4:
        cout << "forty ";
        break;
    case 5:
        cout << "fifty ";
        break;
    case 6:
        cout << "sixty ";
        break;
    case 7:
        cout << "seventy ";
        break;
    case 8:
        cout << "eighty ";
        break;
    case 9:
        cout << "ninety ";
        break;
    }
}

int main()
{
    int a, r, n;
    cin >> a;
    if (a < 10)
    {
        fromZeroToNine(a);
    }
    else
    {
        switch (a)
        {
        case 0:
            cout << "zero";
            break;
        case 10:
            cout << "ten";
            break;
        case 11:
            cout << "eleven";
            break;
        case 12:
            cout << "twelve";
            break;
        case 13:
            cout << "thirteen";
            break;
        case 14:
            cout << "fourteen";
            break;
        case 15:
            cout << "fifteen";
            break;
        case 16:
            cout << "sixteen";
            break;
        case 17:
            cout << "seventeen";
            break;
        case 18:
            cout << "eighteen";
            break;
        case 19:
            cout << "nineteen";
            break;
        case 20:
            cout << "twenty";
            break;
        default:
            n = a;
            while (n > 0)
            {
                n /= 10;
                r++;
            }
            switch (r)
            {
            case 2:
                cout << "Text version of " << a << " : ";
                fromTenToHundred(a / 10);
                fromZeroToNine(a % 10);
                break;
            case 3:
                cout << "Text version of " << a << " : ";
                fromZeroToNine(a / 100);
                cout << " hundred ";
                fromTenToHundred((a % 100) / 10);
                fromZeroToNine(a % 10);
                break;
            case 4:
                cout << "Text version of " << a << " : ";
                fromZeroToNine(a / 1000);
                cout << " thousand ";
                fromZeroToNine((a % 1000) / 100);
                cout << " hundred ";
                fromTenToHundred((a % 100) / 10);
                fromZeroToNine(a % 10);
                break;
            default:
                cout << "Input a number between 0 and 9999";
            }
        }
    }
}