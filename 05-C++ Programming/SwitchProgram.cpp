#include <iostream>
using namespace std;
void a();
void b();
void c();
int main()
{
    int z;
    cin >> z;
    switch (z)
    {
    case 1:
        a();
        break;
    case 2:
        b();
        break;
    case 3:
        c();
        break;
    default:
        cout << "error";
    }
}
void c()
{
    a();
    b();
}
void a()
{
    int i, l;
    for (i = 1; i <= 4; i++)
    {
        for (l = 1; l <= i; l++)
            cout << "*"
                 << " ";
        cout << endl;
    }
}
void b()
{

    int k, j;
    for (j = 1; j <= 4; j++)
    {
        for (k = 4; k >= j; k--)
            cout << "*"
                 << " ";
        cout << endl;
    }
}