// Decimal to tbinary octal hexdecimal

#include <iostream>
using namespace std;

string biner(int num)
{
    int m;
    string result = "";

    while (num > 0)
    {
        m = num % 2;
        char x = m % 10 + 48;
        result = x + result;
        num = num / 2;
    }
    return result;
}
string heksa(int num)
{
    int m;
    string result = "";
    char x;

    while (num > 0)
    {
        m = num % 16;
        if (m < 10)
        {
            x = m % 10 + 48;
        }
        else
        {
            x = m % 10 + 65;
        }
        result = x + result;
        num = num / 16;
    }
    return result;
}
string oktal(int num)
{
    int m;
    string result = "";

    while (num > 0)
    {
        m = num % 8;
        char x = m % 10 + 48;
        result = x + result;
        num = num / 8;
    }
    return result;
}
int main()
{
    cout << "\t      CONVERTING DECIMAL TO BINARY, OCTAL, AND HEXADECIMAL\n\n";
fung:
    int decimal;
    cout << "Decimal \t: ";
    cin >> decimal;
    cout << "Binary \t\t: " << biner(decimal) << endl;
    cout << "Octal \t\t: " << oktal(decimal) << endl;
    cout << "Hexadecimal \t: " << heksa(decimal) << endl;

    cout << "\nWant some more? (YES/NO)" << endl;
    string choice;
    cin >> choice;
    if (choice == "YES")
    {
        goto fung;
    }
    else if (choice == "NO")
    {
        cout << "Thank you for using our service.";
    }
}