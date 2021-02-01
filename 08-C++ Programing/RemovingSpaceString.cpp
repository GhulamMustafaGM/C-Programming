// Remove spaces from a stirng

#include <iostream>
using namespace std;
void out(string const &word)
{
    for (char c : word)
        if (c != 32)
            cout << c;
    cout << endl;
}
int main()
{
    out("ab c  d e fgh i  j kl mn  opqr  stuvwxyz");
}
