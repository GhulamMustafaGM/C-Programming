// Relational operators

/*Goal: learn if-else statements in C++*/

#include <iostream>
#include <string>

int main()
{
    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};

    int a = 100;
    int b = 33;
    int c = 33;

    //Print out the string values of each relational operation
    std::cout << "a < b is " << TorF[a < b];
    std::cout << "\na > b is " << TorF[a > b];
    std::cout << "\na != b is " << TorF[a != b];
    std::cout << "\nc >= b is " << TorF[c >= b];
    std::cout << "\nc <= b is " << TorF[c <= b];
    std::cout << "\n";
    return 0;
}

/* output 

a < b is False
a > b is True
a != b is True
c >= b is True
c <= b is True

*/