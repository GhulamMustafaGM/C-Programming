// The power of iterators
/* 

template <class InIter> void insert(iterator i, InIter start, InIter end);

*/

// Insert one vector into another.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> v, v2;
    unsigned int i;

    for (i = 0; i < 10; i++)
        v.push_back('A' + i);

    // display original contents of vector
    cout << "Original contents:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl
         << endl;

    // initialize second vector
    char str[] = "-STL Power-";
    for (i = 0; str[i]; i++)
        v2.push_back(str[i]);

    /* get iterators to the middle of v and
	the start and end of v2 */
    vector<char>::iterator p = v.begin() + 5;
    vector<char>::iterator p2start = v2.begin();
    vector<char>::iterator p2end = v2.end();

    // insert v2 into v
    v.insert(p, p2start, p2end);

    // display result
    cout << "Contents of v after insertion:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}

/* output 

Original contents:
A B C D E F G H I J

Contents of v after insertion:
A B C D E - S T L   P o w e r - F G H I J

*/