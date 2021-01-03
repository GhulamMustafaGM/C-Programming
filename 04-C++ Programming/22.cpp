// Sorting names using array

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    /// Initilaize vector using intitializer list ( requires C++11 )
    std::vector<std::string> names = {" Jhon", "David", "Adam", "Ericsson", "Catherine", "Tomy", "Nomi", "Martin", "Kikersson", "Maya", "Deena", "Zack", "Ricky", "Solman"};

    // Sort names using std::sort
    std::sort(names.begin(), names.end());

    // Print using range-based and const auto& for ( both requires C++11 )
    for (const auto &currentName : names)
    {
        std::cout << currentName << std::endl;
    }

    //... or by using your orignal for loop ( vector support [] the same way as plain arrays )
    for (int y = 0; y < names.size(); y++)
    {
        std::cout << names[y] << std::endl; // you were outputting name[z], but only increasing y, thereby only outputting element z ( 14 )
    }
    return 0;
}