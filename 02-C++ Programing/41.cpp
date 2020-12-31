// Returning objects

#include <iostream>
#include <cstring>
using namespace std;

class sample
{
    char s[80];

public:
    void show() { cout << s << endl; }
    void set(char *str) { strcpy(s, str); }
};

// Return an object of type sample.

sample input()
{
    char instr[80];

    sample str;

    cout << "Enter a string: ";
    cin >> instr;

    str.set(instr);

    return str;
}

int main()
{
    sample ob;

    // assign returned object to ob

    ob = input();
    ob.show();

    return 0;
}

/* output:

Enter a string: ghulam
ghulam

*/