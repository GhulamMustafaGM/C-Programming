// This program is now fixed.

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class sample
{
    char *s;

public:
    sample();                 // normal constructor
    sample(const sample &ob); // copy constructor
    ~sample()
    {
        if (s)
            delete[] s;
        cout << "Freeing s\n";
    }

    void show() { cout << s << "\n"; }
    void set(char *str);
    sample operator=(sample &ob); // overload assignment
};

// Normal constructor.

sample::sample()
{
    s = new char('\0'); // s points to a null string.
}

// Copy constructor.

sample::sample(const sample &ob)
{
    s = new char[strlen(ob.s) + 1];
    strcpy(s, ob.s);
}

// Load a string.

void sample::set(char *str)
{
    s = new char[strlen(str) + 1];
    strcpy(s, str);
}

// Overload assignment operator.
sample sample::operator=(sample &ob)
{
    /* If the target memory is not large enough
    then allocate new memory. */
    if (strlen(ob.s) > strlen(s))
    {
        delete[] s;
        s = new char[strlen(ob.s) + 1];
    }
    strcpy(s, ob.s);
    return *this;
}
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

    ob = input(); // This is now OK
    ob.show();

    return 0;
}

/* output:

error in compile 

*/

/* Overloading []

type class-name::operator(int index)
{
	// ...
}

*/