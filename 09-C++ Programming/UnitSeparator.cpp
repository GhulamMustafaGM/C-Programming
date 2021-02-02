// Unit separator

#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int v;
    std::cin >> v;
    int k = std::to_string(v).length() - 1;

    for (char i : std::to_string(v))
    {
        int t = (i - 48) * std::pow(10, k--);
        std::cout << (t ? std::to_string(t) + "\n" : "");
    }
}
