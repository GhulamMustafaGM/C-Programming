/* C++ Program - Binary Search */

#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[50], search, first, last, middle;

    cout << "Enter total number of elements :";
    cin >> n;

    cout << "Enter " << n << " number :";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to find :";
    cin >> search;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else if (arr[middle] == search)
        {
            cout << search << " found at location " << middle + 1 << "\n";
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        cout << "Not found! " << search << " is not present in the list.";
    }
    return 0;
}

/*output

Enter total number of elements :5
Enter 5 number :12
23
34
45
56
Enter a number to find :34
34 found at location 3

Enter total number of elements :5
Enter 5 number :1
2
3
4
5
Enter a number to find :6
Not found! 6 is not present in the list.

*/