// Expanding the string type.
#include <iostream>
#include <cstring>
using namespace std;

class str_type
{
    char string[80];

public:
    str_type(char *str = "") { strcpy(string, str); }

    str_type operator+(str_type str);
    str_type operator+(char *str);

    str_type operator=(str_type str);
    str_type operator=(char *str);

    void show_str() { cout << string; }
};

str_type str_type::operator+(str_type str)
{
    str_type temp;

    strcpy(temp.string, string);
    strcat(temp.string, str.string);

    return temp;
}

str_type str_type::operator=(str_type str)
{
    strcpy(string, str.string);

    return *this;
}

str_type str_type::operator=(char *str)
{
    str_type temp;

    strcpy(string, str);
    strcpy(temp.string, string);

    return temp;
}

str_type str_type::operator+(char *str)
{
    str_type temp;

    strcpy(temp.string, string);
    strcat(temp.string, str);

    return temp;
}

int main()
{
    str_type a("Hello "), b("There!"), c;

    c = a + b;

    c.show_str();
    cout << endl;

    a = "to program in because";
    a.show_str();
    cout << endl;

    b = c = "C++ is fun";

    c = c + " " + a + " " + b;
    c.show_str();

    return 0;
}

/* output: 

Hello There!
to program in because
C++ is fun to program in because C++ is fun

*/