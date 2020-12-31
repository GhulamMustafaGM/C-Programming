#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "Print with set width = 10 \n";
    cout << "Ints" << setw(10);
    cout << "Floats" << setw(10);
    cout << "Doubles" << setw(10) << "\n";

    cout << a;
    cout << setw(10) << b;
    cout << setw(12) << c << endl;

    cout << aa;
    cout << setw(10) << bb;
    cout << setw(12) << cc << endl;

    cout << aaa;
    cout << setw(10) << bbb;
    cout << setw(12) << ccc << endl;

    cout << "Print with tabs \n";
    cout << "Int"
         << "\tFloats"
         << "\tDoubles\n";
    cout << aaa << "\t" << bbb << "\t" << ccc << "\n";

    return 0;
}

/* output 


Print with set width = 10
Ints    Floats   Doubles
45    45.323     45.5468
54    54.323     54.5468
63    63.323     63.5468
Print with tabs
Int     Floats  Doubles
63      63.323  63.5468

*/