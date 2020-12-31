// sort list

#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

int main()
{
    list<int> lst;
    int i;

    // create a list of random integers
    for (i = 0; i < 10; i++)
        lst.push_back());

    cout << "Original contents:\n";
    list<int>::iterator p = lst.begin();
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << endl;

    // sort the list
    lst.sort();
    cout << "Sorted contents:\n";
    p = lst.begin();
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}

/* output 

Original contents:
41 18467 6334 26500 19169 15724 11478 29358 26962 24464

Sorted contents:
41 6334 11478 15724 18467 19169 24464 26500 26962 29358

*/