/* 
C++ programming to find largest element in array
*/

#include <iostream>
using namespace std;

int main()
{
    int large, arr[50], size, i;

    cout << "Enter array size (max 50) : ";
    cin >> size;

    cout << "Enter array elements : ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Searing for largest number ... \n\n";
    large = arr[0];
    for (i = 0; i < size; i++)
    {
        if
            [large < arr[i]] {
                large = arr[i];
            }
    }
    cout << "Largest Number = " << large;
    cout << endl;

    return 0;
}

//output

/*

Enter array size (max 50) : 10
Enter array elements : 98
23
87
34
75
45
65
28
76
33
Searing for largest number ...

Largest Number = 98

*/