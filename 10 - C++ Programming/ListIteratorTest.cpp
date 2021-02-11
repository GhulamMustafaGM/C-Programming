// list and iterator test

#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main()
{
    list<int> L;
    for (int i = 1; i <= 5; ++i)
        L.push_back(i);
    L.erase(++L.begin());
    copy(L.begin(), L.end(), ostream_iterator<int>(cout, ","));

    return 0;
}