// vector basics.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // create zero-length vector
    unsigned int i;

    // display original size of v
    cout << "Size = " << v.size() << endl;

    /* put values onto end of vector --
        vector will grow as needed */

    for (i = 0; i < 10; i++)
        v.push_back(i);

    // display current size of v
    cout << "Current contents: \n";
    cout << "Size now = " << v.size() << endl;

    // display contents of vector
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    /* put more values onto end of vector --
           again, vector will grow as needed */
    for (i = 0; i < 10; i++)
        v.push_back(i + 10);

    // display current size of v
    cout << "Size now = " << v.size() << endl;

    // display contents of vector
    cout << "Current contents: \n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // change contents of vector
    for (i = 0; i < v.size(); i++)
        v[i] = v[i] + v[i];

    // display contents of vector
    cout << "Contents doubled: \n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}

/* output 

Size = 0
Current contents:
Size now = 10
0 1 2 3 4 5 6 7 8 9
Size now = 20
Current contents:
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
Contents doubled:
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38

*/