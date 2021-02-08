// Number converter using recursion

#include <iostream>

using namespace std;
void bin(long a)
{
    if (a == 0)
    {
        ;
    }
    else
    {
        bin(a / 2);
        cout << a % 2;
    }
}
void oct(long b)
{
    if (b == 0)
    {
        ;
    }
    else
    {
        bin(b / 8);
        cout << b % 8;
    }
}
void hex(long c)
{
    if (c == 0)
    {
        ;
    }
    else
    {
        bin(c / 16);
        switch (c % 16)
        {
        case 10:
            cout << "A";
            break;
        case 11:
            cout << "B";
            break;
        case 12:
            cout << "C";
            break;
        case 13:
            cout << "D";
            break;
        case 14:
            cout << "E";
            break;
        case 15:
            cout << "F";
            break;
        default:
            cout << c % 16;
        }
    }
}
int main()
{
    long num;
    cin >> num;
    cout << "Enter a decimal number:" << num << endl;
    if (num > 0)
    {
        cout << "Binary of this number is:";
        bin(num);
        cout << endl;
        cout << "Octal of this number is:";
        oct(num);
        cout << endl;
        cout << "Hexadecimal of this number is:";
        hex(num);
        cout << endl;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}