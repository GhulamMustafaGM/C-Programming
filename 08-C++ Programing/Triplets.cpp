// Triplets

#include <iostream>
using namespace std;

int main()
{
    int arr[20], tmp[20], c, i, j;

    for (i = 0; i < 5; i++)
    {

        cin >> arr[i];
    }
    arr[20] = tmp[20];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            int y = arr[i] + tmp[j];
            if (y == 0)
            {
                c++;
            }
        }
    }

    if (c >= 3)
        cout << "Triplets found";
    else
        cout << "No triplets";
    return 0;
}