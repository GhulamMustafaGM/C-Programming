// A pointer comparison example.

#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int *start, *end;

    start = num;
    end = &num[9];

    // enter the values

    while (start <= endl)
    {
        cout << "Enter a number: ";
        cin >> *start;
        start++;
    }
    start = num; // reset the starting pointer

    // display the values

    while (start <= end)
    {
        cout << *start << ' ';

        start++;
    }
    return 0;
}

/* Output:

Enter a number: 45
Enter a number: 34
Enter a number: 22
Enter a number: 55
Enter a number: 66
Enter a number: 66
Enter a number: 77
Enter a number: 22
Enter a number: 55
Enter a number: 66
45 34 22 55 66 66 77 22 55 66

*/