// Linear search

#include <iostream>
using namespace std;

int main()
{
    int s = 3;
    int bus[] = {6, 78, 678, 65, 3, 4, 5, 6, 7, 9, 10, 62};
    int x = (sizeof(bus) / sizeof(bus[0])) - 1;
    for (int i = 0; i < x; i++)
    {
        if (bus[i] == s)
        {
            cout << i;
            break;
        }
    }
    cout << endl
         << "This is a linear search in an array." << endl
         << "The value of i is found is found and it's index is returned.' ";
    return 0;
}