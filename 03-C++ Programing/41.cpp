/* Pointers to Functions
	
*/

#include <iostream>
using namesapce std;

void vline(int i), hline(int i); // vertical line and horizontal line

int main()
{
    void (*p)(int i);

    p = vline; // point to vline()

    (*p)(4); // call vline()

    p = hline; // point ot hline()

    (*p)(3); // call hline()

    return 0;
}

void hline(int i)

{
    for (; i; i--)
        cout << "-";
    cout << endl;
}

void vline(int i)
{
    for (; i; i--)
        cout << "|\n";
}

/* Output:

|
|
|
|
---