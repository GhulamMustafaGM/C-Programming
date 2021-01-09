// Find number of 5 and between 7 n 100

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number/n";
    cin >> a;
    if (a % 5 == 0)
    {
        while (a <= 100)
        {
            cout << "multiples" << a << endl;
            a = a + 5;
        }
        if (a % 5 == 1)
        {
            a = a + 4;
            while (a <= 100)
            {
                cout << "multiples" << a << endl;
                a = a + 5;
            }
            if (a % 5 == 2)
            {
                a = a + 3;
                while (a <= 100)
                {
                    cout << "multiples" << a << endl;
                    a = a + 5;
                }
                if (a % 5 == 3)
                {
                    a = a + 2;
                    while (a <= 100)
                    {
                        cout << "multiples" << a << endl;
                        a = a + 5;
                    }
                }
                else
                    cout << "Enter a number below 100/n";
            }
        }
    }
}
