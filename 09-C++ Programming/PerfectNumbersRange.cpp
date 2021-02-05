// Perfect numbers in range

#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    int Array1[10000] = {0}, Array2[10000] = {0}, i = 1, sum = 0, j = 0, x = 0, y;

    cout << "Please select your range " << endl;

    cout << "from " << endl;
    cin >> number1;
    cout << "to " << endl;
    cin >> number2;

    y = number1;

    while (number1 <= number2)
    {
        sum = 0;
        i = 1;
        while (i < number1)
        {
            if (number1 % i == 0)
            {
                Array1[j] = i;
                j++;
            }
            i++;
        }
        for (int q = 0; q < j; q++)
        {
            sum += Array1[q];
        }
        for (int q = 0; q < 10000; q++)
        {
            Array1[q] = 0;
        }
        if (sum == number1)
        {
            Array2[x] = sum;
            x++;
        }
        number1++;
    }
    cout << "The perfect numbers between " << y << " and " << number2 << " are :" << endl;
    for (int z = 0; z < x; z++)
    {
        cout << Array2[z] << " , ";
    }
}
