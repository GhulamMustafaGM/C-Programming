// String input

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{

    std::string str1{};
    std::vector<char> str2;

    // input: a string
    std::getline(std::cin, str1);

    // reserves memory
    str2.resize(str1.size());

    std::cout << "Your string is      :  " << str1 << std::endl;
    std::cout << std::endl;

    // reverse and copy the string
    std::reverse_copy(str1.begin(), str1.end(), str2.begin());

    // output your reverse copy
    std::cout << "Your reverse copy is:  ";
    for (std::vector<char>::iterator it = str2.begin(); it != str2.end(); ++it)
        std::cout << *it;

    std::cout << std::endl;

    return 0;
}