// Reverse a string program

#include <iostream>
#include <algorithm>
#include <string>

int main()
{

    std::string str{};

    // Input: a string
    // INFO by Blue: these 😉 emojies doesn't work
    std::getline(std::cin, str);
    std::cout << "Your string is             :  " << str << std::endl;

    // for an impossible input failure
    // try it, if you find one
    // tell it in a comment
    // INFO by Blue: these 😉 emojies doesn't work
    if (std::cin.fail())
    {
        std::cerr << "Wrong input!\n";
        return 1;
    }

    // reverse the string
    reverse(str.begin(), str.end());

    // output your reverse string
    std::cout << "\nThis is your reverse string:  " << str << std::endl;

    return 0;
}

/* Ouput

ghulam
Your string is             :  ghulam

This is your reverse string:  maluhg

*/