#include <iostream>
#include <algorithm>
#include <string>

int main()
{

    std::string str1{};
    std::string str2{};

    // input: a string
    std::getline(std::cin, str1);
    std::cout << "Your string is           :  " << str1 << std::endl;

    // copy the string
    str2 = str1;

    // reverse the string copy
    reverse(str2.begin(), str2.end());

    // output your reverse string
    std::cout << "\nThis is your reverse copy:  " << str2 << std::endl;

    return 0;
}
