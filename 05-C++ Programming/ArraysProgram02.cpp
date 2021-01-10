#include <iostream>
using namespace std;

int main()
{
    int a;
    string a1[31] = {"one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                     "thriteen", "fourteen", "fifteen", "sixteen",
                     "seventeen", "eighteen", "nineteen", "twenty", "thrity",
                     "fourty", "fifty", "sixty", "seventy", "eighty", "ninety",
                     "hundred", "thousend", " and ", " "};
    string a2[10] = {"twenty", "thrity", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    cout << "Enter a number. 1 - 9999 " << endl;
    cin >> a;
    int thousend = a / 1000;
    if (thousend != 0)
    {
        cout << a1[thousend - 1];
        cout << a1[30];
        cout << a1[28];
    }
    int hundred = (a / 100) % 10;
    if (hundred != 0)
    {
        if (thousend != 0)
        {
            cout << a1[30];
            cout << a1[29];
        }
        cout << a1[hundred - 1];
        cout << a1[30];
        cout << a1[27];
    }
    int one = a % 10;
    int ten = (a % 100) - one;
    int tens = a % 100;
    int tenz = ten / 10;
    if (ten != 0 && ten >= 10 && ten < 20)
    {
        if (hundred != 0 || thousend != 0)
        {
            cout << a1[30];
            cout << a1[29];
        }
        cout << a1[tens - 1];
    }
    if (tens >= 20)
    {
        if (hundred != 0 || thousend != 0)
        {
            cout << a1[29];
        }
        cout << a2[tenz - 2];
    }
    if ((ten == 0 || ten >= 20))
    {
        cout << a1[30];
        cout << a1[one - 1];
    }
    return 0;
}