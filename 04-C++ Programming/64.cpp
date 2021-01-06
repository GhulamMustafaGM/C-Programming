// Arrays function

#include <iostream>
using namespace std;

template <class T>
int arr_len(T &arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}

int arr_sum(int arr[]);

int main()
{
    int arr[] = {1, 3, 6};
    cout << "arr length: " << arr_len(arr) << endl;
    cout << "arr sum: " << arr_sum(arr);
    return 0;
}

int arr_sum(int arr[])
{
    int total = 0;
    for (int i = 0; i <= arr_len(arr); i++)
    {
        total += arr[i];
    }
    return total;
}
