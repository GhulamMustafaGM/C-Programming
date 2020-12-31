// Use a map of strings to create a dictionary.

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, string> dictionary;
    dictionary.insert(pair<string, string>("house",
                                           "A place of dwelling."));
    dictionary.insert(pair<string, string>("keyboard",
                                           "An input device."));
    dictionary.insert(pair<string, string>("programming",
                                           "The act of writing a program."));
    dictionary.insert(pair<string, string>("STL",
                                           "Standard Template Library"));
    string s;
    cout << "Enter word: ";
    cin >> s;
    map<string, string>::iterator p;
    p = dictionary.find(s);
    if (p != dictionary.end())
        cout << "Definition: " << p->second;
    else
        cout << "Word not in dictionary.\n";
    return 0;
}

/* output

Enter word: STL
Definition: Standard Template Library

*/