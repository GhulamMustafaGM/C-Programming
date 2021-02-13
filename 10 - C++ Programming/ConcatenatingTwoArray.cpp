// concatenating two array

#include <iostream>
using namespace std;

void FillArray(int x[], int y[])
{
    int i;

    cout << "The first array values :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter item #" << i << ":" << endl;
        cin >> x[i];
    }

    cout << "The 2nd array values :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter item #" << i << ":" << endl;
        cin >> y[i];
    }
}

void Prepare(int x[], int y[], int z[])
{
    int i;

    for (i = 0; i < 5; i++)
        z[i] = x[i];

    for (i = 0; i < 5; i++)
        z[i + 5] = y[i];
}

void PrintArray(int z[])
{
    int i;
    cout << " 3RD Array items are:" for (i = 0; i < 10; i++)
                cout
         << z[i] << endl;
}

int main()
{

    int ar[5], arr[5], arrr[10], i;
    FillArray(ar, arr);
    Prepare(ar, arr, arrr);
    PrintArray(arrr);
}
