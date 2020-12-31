// accessign a Vector through an iterator

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v; // create zeor-length vector
    int i;

    // put values into a vector

    for (i = 0; i < 25; i++)
        v.push_back('A' + i);

    // can access vector contents using subscripting
    for (i = 0; i < 26; i++)
        cout << v[i] << " ";
    cout << endl;

    // access via iterator

    vector<char>::iterator p = v.begin();
    while (p != v.end())
    {
        cout << *p << " ";
        p++;
    }

    return 0;
}

/* output 

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

*/