// Power numbers

#include <iostream>
#include <math.h>
using namespace std;
int power(int a, int b)
{
    cout << pow(a, b);
}
int main()
{
    int x, z;
    cout << "Enter tow number";
    cin >> x >> z;
    power(x, z);
    return 0;
}
