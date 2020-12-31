// C++ program to insert element in array

#include <iostream>

using namespace std;

int main()
{
    int arr[50], size, insert, i, pos;
    cout << "Enter Array size : ";
    cin >> size;

    cout << "Enter array elements : ";

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to be insert : ";
    cin >> insert;

    cout << "At which position (Enter index number) ? ";
    cin >> pos;

    // now create a space at the required position

    for (i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = insert;
    cout << "Element inserted successfully..!!\n";
    cout << "Now the new array is : \n";
    for (i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//output
/*
Enter Array size : 10
Enter array elements : 1
2
3
5
6
7
8
9
10
11
Enter element to be insert : 4
At which position (Enter index number) ? 3
Element inserted successfully..!!
Now the new array is :
1 2 3 4 5 6 7 8 9 10 11

*/