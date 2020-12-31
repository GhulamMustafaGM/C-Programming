// create uniion-based class.

#include <iostream>
using namespace std;

union u_type
{
    u_type(short int a); // public by default
    void showchars();
    short int i;
    char ch[2];
};

// constructor

u_type::u_type(short int a)
{
    i = a;
}

// Show the characters that comprise a short int.

void u_type::showchars()
{
    cout << ch[0] << " ";
    cout << ch[1] << "\n";
}
int main()
{
    u_type u(1000);
    u.showchars();

    return 0;
}

/* output:

Φ 

*/