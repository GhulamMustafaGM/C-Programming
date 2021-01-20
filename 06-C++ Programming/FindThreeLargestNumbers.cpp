// largrest and smallest of three numbers

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << "You Entered: " << x << " " << y << " " << z << endl;

    cout << "Sum is " << x + y + z << endl;
    cout << "Average is " << (x + y + z) / 3 << endl;
    cout << "Product is " << x * y * z << endl;

    int largest = x;

    if (y > x)
        largest = y;

    if (z > y)
        largest = z;

    int smallest = x;

    if (y < x)
        smallest = y;

    if (z < y)
        smallest = z;

    cout << "Largest number is " << largest << endl;
    cout << "Smallest number is " << smallest;

    return 0;
}
