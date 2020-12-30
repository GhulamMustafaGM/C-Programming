/* C++ Program - Linear Search */

#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, num, n, c = 0, pos;
    cout << "Enter the array size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be search : ";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            c = 1;
            pos = i + 1;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Number not found..!!";
    }
    else
    {
        cout << num << " found at position " << pos;
    }
    return 0;
}

/*output

Enter the array size : 5
Enter Array Elements : 23
34
45
56
67
Enter the number to be search : 45
45 found at position 3

*/