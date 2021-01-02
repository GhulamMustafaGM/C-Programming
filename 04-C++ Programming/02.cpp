// Dynamic memory allocation

#include <iostream>
using namespace std;

int main()
{
    int a, *arr = NULL;
    cout << "how many numbers you want to enter?";
    cin >> a;
    while (!cin || a < 0)
    {
        cout << "please give correct input\n";
        cin >> a;
    }
    //array size cannot be any negative number
    //or alphabet
    arr = new int[a];
    cout << "please enter numbers";
    for (int n = 0; n < a; n++)
    {
        cin >> arr[n];
    }
    cout << "\narray elements are...\n";
    for (int r = 0; r < a; r++)
    {
        cout << "array [" << r << "] = " << arr[r] << " \n";
    }
    return 0;
}
