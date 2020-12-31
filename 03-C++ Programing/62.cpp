// List basics.

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<char> lst; // create an empty list

    int i;

    for (i = 0; i < 10; i++)
        lst.push_back('A' + i);

    cout << "Size = " << lst.size() << endl;

    cout << "Contents: ";

    list<char>::iterator p = lst.begin();
    while (p != lst.end())
    {
        cout << *p;
        p++;
    }
    return 0;
}

/* ouput 

Size = 10
Contents: ABCDEFGHIJ

*/