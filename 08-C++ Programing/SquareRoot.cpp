// Squareroot

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num;

    cin >> num;

    int db = 1;

    for (int i = sqrt(num) + 1; i >= 2; i--)
    {

        if (num % (i * i) == 0)
        {

            db *= i;
            num /= i * i;
            cout << num << endl;
        }
    }

    cout << db << " " << num << endl;

    return 0;
}