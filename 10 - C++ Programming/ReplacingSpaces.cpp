// replacing spaces

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string w, w1;
    getline(cin, w);
    w1 = w;
    int c(0);
    while (c < w.size())
    {
        if (isspace(w[c]) && isspace(w[c + 1]))
        {
            w[c] = '?';
            w[c + 1] = '?';
            c++;
        }
        else if (isspace(w[c]) && isalpha(w[c + 1]))
        {
            w[c] = '!';
        }
        c++;
    }
    cout << "Your word : " << w1 << endl;
    cout << "Replacing spaces : " << w << endl;
    return 0;
}