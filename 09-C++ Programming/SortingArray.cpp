// Soriting of arra of integers

#include <iostream>
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void Sort(int a[], int size)
{
    int i, k;

    for (i = 0; i < size; i++)
    {
        for (k = 0; k < size; k++)
        {
            if (a[k] > a[k + 1])
            {
                Swap(&a[k], &a[k + 1]);
            }
        }
    }

    return;
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
    cout << "The array before sorting:";
    cout << "\n\n";
    Print(arr, s);

    cout << "\n\nThe sorted array:\n\n";

    //call the function to show min & max
    Sort(arr, s);
    Print(arr, s);
    
    return 0;
}
