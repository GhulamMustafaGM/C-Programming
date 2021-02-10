// Random password generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x, n, i;
    srand(time(0));
    char a[] = {"0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz"
                "!@#$%^&*?_:"};

    cout << "Password strength :";
    cin >> n;
    cout << n << " .\n\n";
    cout << "=>Your Password : ";

    x = sizeof(a) - 1;

    for (i = 1; i <= n; i++)
    {
        cout << a[(rand() % x)];
    }
    cout << "\n                  ";
    for (i = 1; i <= n; i++)
    {
        cout << "_";
    }

    return 0;
}
