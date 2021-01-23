// An IP Address Programm 

#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int main()
{
    string add;
    cin >> add;

    int l = add.length();

    int i;
    string n = "\0";
    int T;
    int b;
    int c = 0;

    i = 0;
    if (add[i] == '.')
    {
        T = 0;
        goto y;
    }
    else
    {
        while (i < l)
        {
            while (add[i] != '.' && i < l)
            {
                if (add[i] >= 'a' && add[i] <= 'z' || c == 4)
                {
                    T = 0;
                    goto y;
                }

                n = n + add[i];
                i++;
            }

            c++;

            stringstream obj(n);
            obj >> b;

            if (b >= 0 && b <= 255)
            {
                T = 1;
            }
            else
            {
                T = 0;
                break;
            }

            i++;
            n = "\0";
        }
    }

y:

    if (T == 0 || c <= 3)
    {
        cout << add << " is not a valid address";
    }
    else
    {
        cout << add << " is a valid address";
    }

    return 0;
}