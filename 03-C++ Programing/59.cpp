// Inserting and deleting elements in a vector
// Demonstrate insert and erase

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v;
    unsigned int i;

    for (i = 0; i < 10; i++)
        v.push_back('A' + i);

    // display original contents of vector

    cout << "Size = " << v.size() << endl;
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl
         << endl;

    vector<char>::iterator p = v.begin();
    p += 2; // point to 3rd element

    // insert 10 x's into v

    v.insert(p, 10, 'X');

    // display contents after insertion
    cout << "Size after insert = " << v.size() << endl;
    cout << "Contents after insert: \n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl
         << endl;

    // remove those elements

    p = v.begin();
    p += 2;             // porint to 3rd element
    v.erase(p, p + 10); // remove next 10 elements

    // display contents after deletion
    cout << "Size after erase = " << v.size() << endl;
    cout << "Contents after erase: \n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}

/* outuput 

Size = 10
A B C D E F G H I J

Size after insert = 20
Contents after insert:
A B X X X X X X X X X X C D E F G H I J

Size after erase = 10
Contents after erase:
A B C D E F G H I J

*/