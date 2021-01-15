/ find the digit

// Find The Digit



#include <iostream>
#include <vector>

    using namespace std;
bool test_digit(int x, int a);
int main()
{
    vector<int> digits;
    int a, b, j(0);
    bool fd(true);

    cin >> a >> b;

    for (int i = 0; i <= a; i++)
    {
        fd = test_digit(b, i);
        if (fd == true)
            digits.push_back(i);
    }
    while (j < digits.size())
    {
        cout << digits[j] << " ";
        j++;
    }
    return 0;
}
bool test_digit(int x, int a)
{
    bool v;
    int y = x, z = a;
    do
    {
        if (y % 10 == z % 10)
        {
            y /= 10;
        }
        else if (y == 0)
        {
            goto p;
        }
        else
        {
            y = x;
        }
        z /= 10;
    } while (z != 0);
p:;
    if (y == 0)
        v = true;
    else
        v = false;
    return v;
}
