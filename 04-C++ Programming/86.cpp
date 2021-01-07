// Unsigned Number

#include <iostream>
#include <climits>
#define ZERO 0
#define CHEST 42

using namespace std;
void hexoct();
int main()
{
    unsigned short u_sm = SHRT_MAX;
    unsigned i_im = INT_MAX;
    unsigned long l_lm = LONG_MAX;
    cout << u_sm << endl;
    cout << i_im << endl
         << l_lm << endl;
    cout << ZERO << endl
         << endl;
    hexoct();

    return 0;
}

void hexoct()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    //default decimal
    cout << "chest: " << chest << endl
         << "waist: " << waist << endl
         << "inseam: " << inseam << endl
         << endl;
    //dec  hex  oct
    cout << CHEST << "(decimal) = ";
    cout << hex;
    cout << CHEST << "(hexadecimal) = ";
    cout << oct;
    cout << CHEST << "(octal)" << endl;
}

