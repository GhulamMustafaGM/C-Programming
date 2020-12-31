// Use a map to create a dictionary.

#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class word
{
    char str[20];

public:
    word() { strcpy(str, ""); }
    word(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

// must define less than relative to word objects

bool operator<(word a, word b)
{
    return strcmp(a.get(), b.get()) < 0;
}

class meaning
{
    char str[80];

public:
    meaning() { strcmp(str, ""); }
    meaning(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

int main()
{
    map<word, meaning> dictionary;
    // put words and meanings into map

    dictionary.insert(pair<word, meaning>(word("house"),

                                          meaning("A place of dwelling.")));
    dictionary.insert(pair<word, meaning>(word("keyboard"),
                                          meaning("An input device.")));
    dictionary.insert(pair<word, meaning>(word("programming"),
                                          meaning("The act of writing a program.")));
    dictionary.insert(pair<word, meaning>(word("STL"),
                                          meaning("Standard Template Library")));

    // given a word, find meaning
    char str[80];
    cout << "Enter word: ";
    cin >> str;
    map<word, meaning>::iterator p;
    p = dictionary.find(word(str));
    if (p != dictionary.end())
        cout << "Definition: " << p->second.get();
    else
        cout << "Word not in dictionary.\n";

    return 0;
}

/* output 

Enter word: STL
Definition: Standard Template Library

*/