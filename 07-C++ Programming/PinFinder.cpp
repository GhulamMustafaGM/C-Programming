// Pin finder 

#include <iostream>
using namespace std;

int main()
{
    int pin;
    int tries = 0;
    cin >> pin;
    cout << "Enter a 4 digit pin: " << pin << endl
         << endl;

    for (int i = 0, j = 10000, k = 7000; (i < 3000) && (j > 7000) && (k > 3000); k--, j--, i++)
    {
        //cout << j << " " << i << " "<< k <<" ";
        if (i == pin)
        {
            cout << "Your pin was: " << i;
            break;
        }
        else
        {
            tries++;
        }

        if (k == pin)
        {
            cout << "Your pin was: " << k;
            break;
        }
        else
        {
            tries++;
        }

        if (j == pin)
        {
            cout << "Your pin was: " << j;
            break;
        }
        else
        {
            tries++;
        }
    }
    cout << endl
         << "This took " << tries << " tries!";
    return 0;
}