// Biggest Number


#include <iostream>
using namespace std;

int main()
{

    int x = 0;
    int y = 0;
    int z = 0;

    // Please enter 3 different whole integer
    std::cin >> x >> y >> z;

    // For input failure
    if (std::cin.fail())
    {
        std::cerr << "Wrong input!\n";
        return 1;
    }

    // your input
    std::cout << "Your input: x = " << x << ", y = " << y << ", z = " << z << ",\n\n";

    // test for x
    if (x > y && x > z)
    {
        std::cout << "x is the biggest of your numbers: " << x << std::endl;
    }

    // test for y
    else if (y > x && y > z)
    {
        std::cout << "y is the biggest of your numbers: " << y << std::endl;
    }

    // test for z
    else if (z > y && z > x)
    {
        std::cout << "z is the biggest of your numbers: " << z << std::endl;
    }

    return 0;
}