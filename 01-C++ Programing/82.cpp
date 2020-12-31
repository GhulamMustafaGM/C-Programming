/* Goal: practice writing to tht econsole and learn
the variables types avialbe in c++
print the sizes of each variable to the console.
print them in the following order:
int, short, long, char, float, double, bool

use the command sizeof()variable type ie: sizeof(int)
*/

#include <iostream>

int main()
{
    std::cout << "int size = " << sizeof(int) << ",";
    std::cout << "short isze = " << sizeof(short) << ",";
    std::cout << "long isze = " << sizeof(long) << ",";
    std::cout << "char size = " << sizeof(char) << ", ";
    std::cout << "float size = " << sizeof(float) << ", ";
    std::cout << "double size = " << sizeof(double) << ",";
    std::cout << "bool size = " << sizeof(bool) << ",";

    return 0;
}

/* output 

int size = 4,short isze = 2,long isze = 4,char size = 1, float size = 4, double size = 8,bool size = 1,

*/