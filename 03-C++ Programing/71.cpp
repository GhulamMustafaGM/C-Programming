// Demonstrate reverse algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    unsigned int i;

    for (i = 0; i < 10; i++)
        v.push_back(i);

    cout << "Initial: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "Reversed: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

/* output 

Initial: 0 1 2 3 4 5 6 7 8 9
Reversed: 9 8 7 6 5 4 3 2 1 0

*/