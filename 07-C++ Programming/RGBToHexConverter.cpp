//Program Name : RGB to HEX converter

#include <iostream>
using namespace std;

//Enter R,G,B values(Range is 0 to 255)
//Example: input:119 119 119 -> output:#777777
//Example: input:66 134 244 -> output:#4286F4

void baseConverter(int a, int b);

int main()
{
    int R, G, B;
    int base = 16;

    cin >> R >> G >> B;

    cout << "#";
    baseConverter(R, base);
    baseConverter(G, base);
    baseConverter(B, base);

    return 0;
}

void baseConverter(int a, int b)
{
    int c[30];
    int i;

    if (a == 0)
    {
        cout << "00";
    }
    else
    {
        for (i = 0; a != 0; i++)
        {
            c[i] = a % b;
            a = a / b;
        }

        for (i = i - 1; i >= 0; i--)
        {
            if (c[i] < 10 && c[i] >= 0)
            {
                cout << c[i];
            }
            if (c[i] == 10)
            {
                cout << 'A';
            }
            if (c[i] == 11)
            {
                cout << 'B';
            }
            if (c[i] == 12)
            {
                cout << 'C';
            }
            if (c[i] == 13)
            {
                cout << 'D';
            }
            if (c[i] == 14)
            {
                cout << 'E';
            }
            if (c[i] == 15)
            {
                cout << 'F';
            }
        }
    }
}
