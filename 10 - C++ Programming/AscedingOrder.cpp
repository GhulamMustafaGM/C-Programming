// asceding order

#include <iostream>
using namespace std;

void acsSort(int n1, int n2, int n3);
int main()
{
    int n1, n2, n3, i;
    char answer;
    for (i = 0; i > 0; i++)
        ;
    {
        cout << "Enter three integers" << endl;
        cin >> n1;
        cin >> n2;
        cin >> n3;
        acsSort(n1, n2, n3);
        cout << "Do you want to try other three numbers (Negative value to Exit)" << endl;
        cin >> answer;
    }
    return 0;
}

void acsSort(int n1, int n2, int n3)
{
    int x, y, z;
    {
        if ((x < y) && (x < z))
        {
            cout << x << endl;
            if (y < z)
                cout << y << endl;
            cout << z << endl;
        }
        else if ((y < x) && (y < z))
        {
            cout << y << endl;
            if (x < z)
                cout << x << endl;
            cout << z << endl;
        }

        else if ((z < x) && (z < y))
        {
            cout << z << endl;
            if (x < y)
                cout << x << endl;
            cout << y << endl;
        }
        else
        {
            cout << y << endl;
            cout << x << endl;
        }
    }
}