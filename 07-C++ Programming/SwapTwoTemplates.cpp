// c++ swap between 2 templates


#include <iostream>

template <typename A, typename B>
void swap(A &a, B &b)
{
    auto temp = a;
    a = {b};
    b = {temp};
}

struct Int
{
    int val;
    Int(int o) : val{o} {}
    operator int() { return val; }
};

int main()
{
    Int a{5};
    int b{3};

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl
              << std::endl;

    swap(a, b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
