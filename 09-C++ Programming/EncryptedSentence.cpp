// encrypted sentence

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

std::string &Order(std::string &in)
{
    std::stable_partition(in.begin(), in.end(), [](char c) {switch (std::tolower(c)) { case 'a': case 'e': case 'i': case 'o': case 'u': return true; default: return false;} });
    return in;
}

inline std::string &Rev(std::string &in)
{
    std::reverse(in.begin(), in.end());
    return in;
}

auto main() -> int
{
    std::vector<std::string> uin{std::istream_iterator<std::string>(std::cin), std::istream_iterator<std::string>{}};
    for (size_t i = 0, sz = uin.size(); i < sz; ++i)
    {
        std::string &ele = uin.at(i);
        std::cout << (i % 2 == 0 ? Order(ele) : Rev(ele)) << " ";
    }
}
#define x cin >> // trigger cin