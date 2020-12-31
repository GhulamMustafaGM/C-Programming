// Class the type str_type:

#include <iostream>
#include <cstring>
using namespace std;

class str_type
{
    char string[80];

public:
    str_type(char *str = "") { strcpy(string, str); }

    str_type operator+(str_type str); // concatenate
    str_type operator=(str_type str); // assign

    // ouput the string

    void show_str() { cout << string; }
};

// Concatenate two strings.

str_type str_type::operator+(str_type str)
{
    str_type temp;

    strcpy(temp.string, string)
        strcat(temp.string, str.string);

    return temp;
}
// assign one string to another.
str_type str_type::operator=(str_type str)
{
    strcpy(string, str.string);

    return *this;
}

int main()
{
    str_type a("Hello "), b("There"), c;
    c = a + b;

    c.show_str();

    return 0;
}

/* Output:

Hello There

 */