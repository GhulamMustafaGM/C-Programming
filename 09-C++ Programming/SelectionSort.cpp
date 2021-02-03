// Selectoin sort

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {4, 5, 2, 3, 1, 9, 7, 8, 6, 0};

    for (int i = 0; i < v.size(); std::cout << v[i++] << " ")
        std::swap(*std::min_element(v.begin() + i, v.end()), v[i]);
}
