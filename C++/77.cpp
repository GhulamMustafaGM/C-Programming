// C++ pgrogramming code to find smallest element in array

#include <iostream>
using namespace std;

int main()
{
    int small, arr[50], size, i;

    cout << "Enter Array size (max 50) : ";
    cin >> size;

    cout << "Enter array elements : ";

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Searching for smallest element ...\n\n";

    small = arr[0];

    for (i = 0; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    cout << "Smallest element = " << small;
    cout << endl;

    return 0;
}

// output

/*

Enter Array size (max 50) : 8
Enter array elements : 1
9
2
5
6
7
2
6
Searching for smallest element ...

Smallest element = 1

*/