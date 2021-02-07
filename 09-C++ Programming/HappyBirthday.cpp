// Happy birthday

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, n = 7;
    string message = " Happy Birthday! ";
    int print_message = 4;
    if (message.length() % 2 != 0)
        message += " ";
    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= 4 * n; b++)
        {

            double distance1 = sqrt(pow(a - n, 2) + pow(b - n, 2));
            double distance2 = sqrt(pow(a - n, 2) + pow(b - 3 * n, 2));

            if (distance1 < n + 0.5 || distance2 < n + 0.5)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    for (a = 1; a < 2 * n; a++)
    {
        for (b = 0; b < a; b++)
            cout << " ";
        for (b = 0; b < 4 * n + 1 - 2 * a; b++)
        {
            if (a >= print_message - 1 && a <= print_message + 1)
            {
                int point = b - (4 * n - 2 * a - message.size()) / 2;
                if (point < message.size() && point >= 0)
                {
                    if (a == print_message)
                        cout << message[point];
                    else
                        cout << " ";
                }

                else
                    cout << "*";
            }

            else
                cout << "*";
        }

        cout << endl;
    }
}