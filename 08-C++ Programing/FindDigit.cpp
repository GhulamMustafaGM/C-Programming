#include <iostream>
using namespace std;

int main()
{
    int n, t, i, p, n1, A[9];
    void getword(int);
    cout << "Enter a number(upto 9 digits): ";
    cin >> n;
    cout << n;
    cout << "\n";
    cout << "Word form of number: ";
    n1 = n;
    for (i = 0; n != 0; i++)
    {
        n = n / 10;
    }
    if (i < 10)
    {
        for (int j = 0; n1 != 0; j++)
        {
            t = n1 % 10;
            n1 = n1 / 10;
            A[j] = t;
        }
        for (int j = i; j > 0; j--)
        {
            if (j < 4)
            {
                if (j == 3)
                {
                    if (A[j - 1] != 0)
                    {
                        getword(A[j - 1]);
                        cout << "hundred ";
                    }
                }
                else
                {
                    if (j == 1)
                    {
                        if (i == 1)
                        {
                            p = A[j - 1];
                        }
                        else
                        {
                            p = A[j] * 10 + A[j - 1];
                        }
                        getword(p);
                    }
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    p = (A[j]) * 10 + A[j - 1];
                    getword(p);
                    switch (j)
                    {
                    case 4:
                        cout << "Thousand ";
                        break;
                    case 6:
                        cout << "Lakh ";
                        break;
                    case 8:
                        cout << "Crore ";
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }
    else
    {
        cout << "Please enter a number upto 9 digits";
    }
    return 0;
}
void getword(int a)
{
    int b, c;
    b = a % 10;
    c = a / 10;
    if (a < 20)
    {
        switch (a)
        {
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        case 10:
            cout << "ten ";
            break;
        case 11:
            cout << "eleven ";
            break;
        case 12:
            cout << "twelve ";
            break;
        case 13:
            cout << "therteen ";
            break;
        case 14:
            cout << "fourteen ";
            break;
        case 15:
            cout << "fifteen ";
            break;
        case 16:
            cout << "sixteen ";
            break;
        case 17:
            cout << "seventeen ";
            break;
        case 18:
            cout << "eighteen ";
            break;
        case 19:
            cout << "nineteen ";
            break;
        }
    }
    else
    {
        switch (c)
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
            cout << "ninty ";
            break;
        }
        getword(b);
    }
}
