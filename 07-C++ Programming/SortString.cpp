// Sort a string

#include <cctype>
#include <iostream>
#include <queue>
using namespace std;
class Ch
{
    unsigned short level;
    char c;

public:
    /* Level 0:symbol, 1:digit, 2:letter */
    Ch(char x) : level((isdigit(x) != 0) + (ispunct(x) != 0) * 2), c(x) {}
    bool operator<(Ch const &x) const
    {
        return level != x.level ? level < x.level : toupper(c) > toupper(x.c);
    }
    void o() const
    {
        cout << c;
    }
};

class String
{
    priority_queue<Ch> s;

public:
    String(string const &x)
    {

        /* Remove whitespaces */
        for (char c : x)
            if (isgraph(c))
                s.push(c);

        /* Sort and print */
        while (!s.empty())
        {
            s.top().o();
            s.pop();
        }
    }
};
int main()
{
    String s("Challenge Happy42 $Tar3"
        "Hello, World!");
}