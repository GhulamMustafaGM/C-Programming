// Code and decode string

#include <iostream>
#include <string>
    using namespace std;

string sym = "0123456789_"
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz";

inline char code_chr(char c, char p)
{
    return sym[(
                   sym.find(c) + sym.find(p)) %
               sym.size()];
}

inline char decode_chr(char c, char p)
{
    return sym[(sym.size() +
                sym.find(c) - sym.find(p)) %
               sym.size()];
}

string code_str(string s, string p)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = code_chr(s[i], p[i % p.size()]);

    return s;
}

string decode_str(string s, string p)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = decode_chr(s[i], p[i % p.size()]);

    return s;
}

int main()
{
    string test = "Hi World";
    string pass = "pass";
    string code = code_str(test, pass);
    string decode = decode_str(code, pass);

    cout << code << endl
         << decode << endl;

    return 0;
}