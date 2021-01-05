#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[3];
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 7;
    cout << *arr + 1 << endl; //?
    delete[] arr;             //free the memory
                              // delete arr;//invalid

    int arr2[] = {1, 3, 5};
    // delete []  arr2  //invalid
    cout << *arr2; //ok
    return 0;
}

/* output

6
1

*/