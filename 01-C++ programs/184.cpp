
// A simple safe array.

#include <iostream>
using namespace std;

int &put(int i); // put value into the array
int get(int i);  // obtain a value from the array
int vals[10];
int error = -1;
int main()
{
    put(0) = 10; // put values into the array
    put(1) = 20;
    put(9) = 30;
    cout << get(0) << ' ';
    cout << get(1) << ' ';
    cout << get(9) << ' ';

    // now, intentionally generate an error

    put(12) = 1; // Out of Bounds
    return 0;
}
// Put a value into the array.

int &put(int i)
{
    if (i >= 0 && i < 10)
        return vals[i]; // return a reference to the ith element
    else
    {
        cout << "Bounds Error!\n";
        return error; // return a reference to error
    }
}
// Get a value from the array.
int get(int i)
{
    if (i >= 0 && i < 10)
        return vals[i]; // return the value of the ith element
    else
    {
        cout << "Bounds Error!\n";
        return error; // return an error
    }
}

/* output:

10 20 30 Bounds Error!

*/