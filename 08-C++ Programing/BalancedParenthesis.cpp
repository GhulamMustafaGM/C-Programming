// Balanced parenthesis

#include <iostream>
#include <map>
#include <stack>
using namespace std;
map<char, char> balances{{'(', ')'}, {'[', ']'}, {'{', '}'}};

bool check(string const &expr)
{
    stack<char> s;
    bool esc = false;
    for (char c : expr)
    {
        if (esc)
        {
            esc = false;
            continue;
        }
        if (c == '\\')
        {
            esc = true;
            continue;
        }
        for (auto &item : balances)
        {
            char left = item.first;
            char right = item.second;
            if (c == left)
            {
                s.push(c);
                break;
            }
            if (c == right)
            {
                if (s.empty() || s.top() != left)
                    return false;
                s.pop();
            }
        }
    }
    return true;
}
int main()
{
    cout << check("(test)[]{()}[cal{}id](v\\[al)");
}