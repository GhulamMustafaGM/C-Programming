// Table count

#include <iostream>
using namespace std;

int conta(int a, int b)
{
    return a * b;
}

int main()
{
    for (int num = 1; num <= 10; num++)

    {
        for (int num2 = 0; num2 <= 10; num2++)
        {
            cout << num << "x" << num2 << "=" << conta(num2, num) << endl;
            while (num2 == 10)
            {
                cout << endl;
                break;
            }
        }
    }

    return 0;
}
