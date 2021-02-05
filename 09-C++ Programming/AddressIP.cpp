// IP address

#include <iostream>
using namespace std;

// Enter a IP Address in form of a string

int main()
{
    string A;
    int t;
    int a = 0;
    int j = 0;
    int k = 0;
    cout << "Enter an ip address: ";
    getline(cin, A);
    cout << A;
    cout << "\nIs this ip is valid: ";
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == '.')
        {
            if (a == 1 && j < 4)
            {
                j++;
                a = 0;
            }
        }
        else
        {
            if (A[i] >= '0' && A[i] <= '9' && a == 0 && k < 5)
            {
                t = t * 10 + (A[i] - 48);
                if (A[i + 1] >= '0' && A[i + 1] <= '9')
                {
                    a = 0;
                }
                else
                {
                    if (A[i + 1] == '.' || A[i + 1] == '\0')
                    {
                        if (t >= 0 && t <= 255)
                        {
                            a = 1;
                            k++;
                            t = 0;
                        }
                    }
                }
            }
            else
            {
                a = -1;
                break;
            }
        }
    }
    if (a != -1 && j == 3 && k == 4)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}