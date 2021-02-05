// Decimail, octal , hexidecimal


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// To print (different) values
template <typename S, typename D>
void print(S s, D d1, D d2, D d3);

//To print line
void line();

int main()
{
    //Numbers with different base
    int d = 10;  // decimal [0..9]
    int o = 013; // octal 0[0..7]
    int h = 0xC; // hexadecimal 0x[0..f]

    //header
    print("", "dec:", "oct:", "hex:");
    print("", "10", "013", "0xc");
    line();

    cout << dec; // decimal
    print("dec:", d, o, h);

    cout << oct; // octal
    print("oct:", d, o, h);

    cout << hex; // hexadecimal
    print("hex:", d, o, h);

    //Show base on
    cout << showbase; //show base
    line();

    cout << setbase(10); // decimal
    print("dec:", d, o, h);

    cout << setbase(8); // octal
    print("oct:", d, o, h);

    cout << setbase(16); // hexadecimal
    print("hex:", d, o, h);

    return 0;
}

// To print (different) values
template <typename S, typename D>
void print(S s, D d1, D d2, D d3)
{
    cout << setw(5) << s;
    cout << setw(5) << d1;
    cout << setw(5) << d2;
    cout << setw(5) << d3;
    cout << endl;
}

//To print line
void line()
{
    cout << setw(20) << setfill('-') << "";
    cout << setfill(' ') << endl;
}