
// C++ program - reverse array

#include <iostream>
using namespace std;

int main()
{
    int arr[50], size, i, j, temp;

    cout << "Enter array size : ";
    cin >> size;

    cout << "Enter array elements : ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    j = i - 1; // now j will point to the last element
    i = 0;     // and i will be point to the first element

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "Now the Reverse of of the Arry : \n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// output

/* 

Enter array size : 10
Enter array elements : 1
3
4
5
6
7
8
9
10
2
Now the Reverse of of the Arry :
2 10 9 8 7 6 5 4 3 1

*/