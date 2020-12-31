// Demonstrate remove_copy and replace_copy.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char str[] = "This is a test.";
    vector<char> v, v2(20);
    unsigned int i;

    for (i = 0; str[i]; i++)
        v.push_back(str[i]);

    // **** demonstrate remove_copy ****

    cout << "Input sequence: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;

    // Remove all i's
    remove_copy(v.begin(), v.end(), v2.begin(), 'i');
    cout << "Result after removing i's: ";
    for (i = 0; i < v2.size(); i++)
        cout << v2[i];
    cout << endl
         << endl;

    // **** now, demonstrate replace_copy ****
    cout << "Input sequence: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;

    // Replace s's with X's
    replace_copy(v.begin(), v.end(), v2.begin(), 's', 'X');
    cout << "Result after replacing s's with X's: ";
    for (i = 0; i < v2.size(); i++)
        cout << v2[i];
    cout << endl
         << endl;

    return 0;
}

/* output 

Input sequence: This is a test.
Result after removing i's: Ths s a test.

Input sequence: This is a test.
Result after replacing s's with X's: ThiX iX a teXt.

*/