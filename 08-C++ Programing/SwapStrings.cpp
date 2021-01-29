// Swap strings

#include <iostream>
#include <string>

int main()
{
    std::string s1 = "String A\n";
    std::string s2 = "String B\n";

    std::cout << "Before:\n";
    std::cout << s1 << s2;
    s1.swap(s2);
    std::cout << "\nAfter:\n";
    std::cout << s1 << s2;

    return 0;
}
