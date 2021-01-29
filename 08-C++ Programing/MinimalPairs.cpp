// A minimal pairs product sum

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using vec = vector<unsigned short>;
class Array
{
    unsigned long long min_sum;
    vec min_array;

public:
    Array() : min_sum(~0ULL) {}
    ~Array()
    {
        cout << '[' << min_array[0];
        for (auto p = min_array.cbegin() + 1; p != min_array.cend(); ++p)
            cout << ", " << *p;
        cout << "] = " << min_sum << endl;
    }

    void refresh(vec const &v)
    {
        unsigned long long s = 0;
        for (auto p = v.cbegin() + 1; p != v.cend(); ++p)
            s += *p * (*(p - 1) + 0UL);
        if (s < min_sum)
        {
            min_sum = s;
            min_array = v;
        }
    }
};
class Calculate
{
    Array answer;
    vec array;

public:
    Calculate(vec const &a) : array(a)
    {
        sort(array.begin(), array.end());
    }
    ~Calculate()
    {
        do
            answer.refresh(array);
        while (next_permutation(array.begin(), array.end()));
    }
};
int main()
{
    Calculate({40, 25, 10, 5, 1});
}