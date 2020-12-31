#include <iostream>
#include <iomanip>
using namespace std;

istream &prompt(istream &stream)
{
    cin >> hex;
    cout << "Enter number using hex format: ";

    return 0;
}

int main()
{
    int i;

    cin >> prompt >> i;

    return 0;
}

/* Output:

Enter number using hex format:

*/