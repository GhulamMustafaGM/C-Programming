/* C++ program - print fibonacci series */
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, limit;

    cout << "Upto How many term ? ";
    cin >> limit;

    cout << "Fabonoacci series: " << a << " " << b << " "; //firs two term

    c = a + b;

    limit = limit - 2; // decrease the limit by 2. since two number already printed

    while (limit)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
        limit--;
    }

    return 0;
}
/*output 

Upto How many term ? 10
Fabonoacci series: 0 1 1 2 3 5 8 13 21 34

*/