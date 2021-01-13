// C string compression

#include <algorithm>
#include <iostream>
using namespace std;
void compress(string const &word)
{
    string::const_iterator const end = word.cend();
    for (string::const_iterator a = word.cbegin(), b = a; a != end; a = b)
    {
        while (b != end && *b == *a)
            ++b;
        cout << *a;
        if (b - a != 1)
            cout << b - a;
    }
}
int main()
{
    compress("aaabbbbccd");
}