// Demonstrate structure assignments.

#include <iostream>
using namespace std;

struct stype
{

    int a, b;
};

int main()
{
    stype svar1, svar2;
    svar1.a = svar1.b = 10;
    svar2.a = svar2.b = 20;

    cout << "Structures before assignment.\n";
    cout << "svar1: " << svar1.a << ' ' << svar1.b;
    cout << '\n';

    cout << "svar2: " << svar2.a << ' ' << svar2.b;
    cout << "\n\n";

    svar2 = svar1; // assign structures

    cout << "Structures after assignment.\n";
    cout << "svar1: " << svar1.a << ' ' << svar1.b;
    cout << '\n';
    cout << "svar2: " << svar2.a << ' ' << svar2.b;

    return 0;
}

/* output:

Structures before assignment.
svar1: 10 10
svar2: 20 20

Structures after assignment.
svar1: 10 10
svar2: 10 10

*/