// <set> example

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> num;
    num.insert(7);
    num.insert(6);
    num.insert(6);
    num.insert(666);
    num.insert(665);
    num.insert(9);
    num.insert(1);
    num.insert(665);
    num.insert(237);
    num.insert(0);
    num.insert(237);
    for (set<int>::iterator it = num.begin(); it != num.end(); ++it)
        cout << " " << *it;
    return 0;
}