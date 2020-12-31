// this program demonstrates the xor() function.

#include <iostream>
using namespace std;

bool xor (bool a, bool b);

int main()
{
    cout << "Enter P (0 or 1): ";
    cin >> p;

    cout << "Enter Q (0 or 1): ";
    cin >> q;

    cout << "P AND Q: " << (p && q) << endl;
    cout << "P OR Q: " << (p || q) << endl;
    cout << "P XOR Q: " << xor(p, 1) << endl;

    return 0;
}