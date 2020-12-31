
#include <iostream>
using namespace std;

double &change_it(int i); // return a reference
double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};

int main()
{
    int i;
    cout << "Here are the original values: ";
    for (i = 0; i < 5; i++)
        cout << vals[i] << ' ';
    cout << '\n';
    change_it(1) = 5298.23; // change 2nd element
    change_it(3) = -98.8;   // change 4th element
    cout << "Here are the changed values: ";
    for (i = 0; i < 5; i++)
        cout << vals[i] << ' ';
    cout << '\n';
    return 0;
}
double &change_it(int i)
{
    return vals[i]; // return a reference to the ith element
}

/* output:

Here are the original values: 1.1 2.2 3.3 4.4 5.5
Here are the changed values: 1.1 5298.23 3.3 -98.8 5.5

*/