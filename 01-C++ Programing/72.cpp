/* C++ Program - One Dimensional Array Program */

#include <iostream>
using namespace std;

int main()
{

    int arr[50], n;
    cout << "How many element you want to store in the array ? ";
    cin >> n;

    cout << "Enter " << n << " element to store in the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Elements in the Array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*output

How many element you want to store in the array ? 5
Enter 5 element to store in the array : 12
23
34
45
56
The Elements in the Array is :
12 23 34 45 56

*/