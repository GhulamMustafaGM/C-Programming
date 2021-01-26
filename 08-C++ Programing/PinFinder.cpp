// Pin Finder 

#include <iostream>
using namespace std;

int main()
{

    int pin = 0;
    int jTries = 0;
    int iTries = 0;
    cin >> pin;

    bool onsearch = true;

    if (onsearch == true)
    {
        for (int i = 0; i < 5000; i++)
        {
            if (i == pin)
            {
                cout << "Your pin was found: " << i;
                onsearch = false;
                break;
            }
            else
            {
                iTries++;
            }
        }
    }

    if (onsearch)
    {

        for (int j = 10000; j > 5000; j--)
        {
            if (j == pin)
            {
                cout << "Your pin was found: " << j;

                onsearch = false;
                break;
            }
            else
            {
                jTries++;
            }
        }
    }

    cout << endl
         << "Took " << iTries + jTries << " tries to find your pin.";

    return 0;
}
