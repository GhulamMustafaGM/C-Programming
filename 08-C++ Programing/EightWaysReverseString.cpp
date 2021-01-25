/* Eight ways to reverse a string */

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string base = "Let's reverse this string";
    string rev = "";

    cout << base << endl;

    //Method 1: ranged based iteration of the base string with insertion of the chars to the front of the target string
    for (char &c : base)
    {
        rev.insert(rev.begin(), c);
    }
    cout << "1: " << rev << endl;

    //Method 2: loop half the range and swap single chars
    rev = base;
    for (int i = 0; i < rev.size() / 2; i++)
    {
        char tmp = rev[i];
        rev[i] = rev[rev.size() - i - 1];
        rev[rev.size() - i - 1] = tmp;
    }
    cout << "2: " << rev << endl;

    //Method 3: use reversed iterator and push chars to the back of the target
    rev = "";
    for (auto it = base.rbegin();
         it != base.rend();
         it++)
    {
        rev.push_back(*it);
    }
    cout << "3: " << rev << endl;

    //Method 4: basically the same as 3, but with forward iterator set to the end of the base string and decrementing it
    rev = "";
    for (auto it = base.end();
         it != base.begin() - 1;
         --it)
    {
        rev.push_back(*it);
    }
    cout << "4: " << rev << endl;

    //Method 5: use 2 iterators for begin+end and use std::iter_swap to swap them. Then increment begin and decrement end. Loop until begin is either end or 1 below
    rev = base;
    auto itB = rev.begin();
    auto itE = rev.end();

    while ((itB != itE) && (itB != --itE))
    {
        std::iter_swap(itB, itE);
        itB++;
    }
    cout << "5: " << rev << endl;

    //Method 6: similar to 5, but without iterators. Accessing of chars via [] operator
    rev = base;
    int size = rev.size() - 1;
    int pos = 0;

    do
    {
        std::swap(rev[pos], rev[size - pos]);
    } while (pos++ < size / 2);
    cout << "6: " << rev << endl;

    //Method 7: This is what happens when using std::swap
    rev = base;
    size = rev.size() - 1;
    pos = 0;

    do
    {
        char tmp = std::move(rev[pos]);
        rev[pos] = std::move(rev[size - pos]);
        rev[size - pos] = std::move(tmp);
    } while (pos++ < size / 2);
    cout << "7: " << rev << endl;

    //Method 8: use <algorithm> and let std::reverse do the work <3
    rev = base;
    std::reverse(rev.begin(), rev.end());
    cout << "8: " << rev << endl;

    return 0;
}