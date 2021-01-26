// largest number in a array

#include <iostream>
using namespace std;

int mylist[10] = {50, 30, 45, 76, 34, 25, 87, 20, 1, 10};
int num = mylist[0];

int main()
{
    cout << "Here is the list:" << endl
         << "[";
    for (int i = 0; i < 10; i++)
    {
        cout << mylist[i] << ",";

        if (mylist[i] > num)
        {
            num = mylist[i];
        }
    }

    cout << "]" << endl
         << endl
         << "Here is the largest number: " << num << endl
         << endl
         << "Feel free to copy any part of this code or change the numbers in the array.";

    return 0;
}