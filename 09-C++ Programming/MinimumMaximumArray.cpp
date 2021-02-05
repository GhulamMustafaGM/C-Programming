// Minimum and maximum of array

#include <iostream>
using namespace std;

void Max_Min(int a[], int size)
{
    int i;
    int max = a[0];
    int min = a[0];

    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "    >> Maximum element is : ";
    cout << max;
    cout << "\n\n    ";
    cout << ">> Minimum element is: ";
    cout << min;
}

void Read(int a[], int size)
{

    int i;

    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void Print(int a[], int size)
{

    int i;

    for (i = 0; i < size; i++)
    {
        cout << " - " << a[i];
    }
}

int main()
{

    int s;
    int arr[10];

    cin >> s;

    Read(arr, s);

    // print the original message
    cout << "The array values:" << endl;
    Print(arr, s);

    cout << "\n\nThe Max & Min:\n\n";

    //call the function to show min & max
    Max_Min(arr, s);

    return 0;
}
