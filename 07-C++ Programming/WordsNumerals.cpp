// Input  - A Number n, in Words or Numerals.
//          Can be left Empty.
// Output - Numbers in alternate form.
//          (Input(Numeral)->Output(Words)).

// Range  -  Num_To_Word =
//           [0,18446744073709551615]
//        -  Word_To_Num = [0,100000)
//           << 100000 not included. >>

//        The alphabets may be in any case.

#include <algorithm>
#include <iterator>
#include <iostream>
#include <sstream>
#include <locale>
#include <string>
#include <list>
using namespace std;

typedef unsigned long long ull;

const string ones[] =
    {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const string tens[] =
    {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const string pows[] = {"Hundred", "Thousand"};

string ToTitle(string s)
{
    string res;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '.')
            res += toupper(s[i]);
        else
            res += tolower(s[i]);
    }
    return res;
}
ull Int(string s)
{
    ull v;
    stringstream ss(s);
    ss >> v;
    return v;
}
bool isnum(string a)
{
    if (isdigit(a[0]) || a[0] == '-')
    {
        for (int i = 1; i < a.length(); i++)
            if (!(isdigit(a[i])))
                return false;
        return true;
    }
    return false;
}
int Simplify(list<string> ls)
{
    if (ls.empty())
        return 0;
    list<string> w;
    int i = 0, m = 1;
    while (true)
    {
        w.push_back(ls.front());
        ls.pop_front();
        if (ls.empty())
            break;
        if (find(pows, pows + 3, ls.front()) != pows + 3)
        {
            w.push_back(ls.front());
            ls.pop_front();
            break;
        };
    }
    if (find(pows, pows + 2, w.back()) != pows + 2)
    {
        if (w.back() == "Hundred")
        {
            m = 100;
            w.pop_back();
        }
        else if (w.back() == "Thousand")
        {
            m = 1000;
            w.pop_back();
        }
    }
    if (find(tens, tens + 10, w.front()) != (tens + 10) && w.size() > 1)
    {
        i += distance(tens, find(tens,
            tens + 10, w.front()));
        i *= 10;
        if (not w.back().empty())
            i += distance(ones, find(ones,
                ones + 20, w.back()));
    }
    else
    {
        i += distance(ones, find(ones,
            ones + 20, w.front()));
    }
    return (i * m) + Simplify(ls);
}
string Num_To_Word(ull n)
{
    string word;
    if (n >= 1000000000000000000)
    {
        word += Num_To_Word(n / 1000000000000000000);
        word += " Quintillion";
        if (n % 1000000000000000000 > 0)
        {
            word += " ";
            word += Num_To_Word(n %
                                1000000000000000000);
        }
    }
    else if (n >= 1000000000000000 &&
             n < 1000000000000000000)
    {
        word += Num_To_Word(n / 1000000000000000);
        word += " Quadrillion";
        if (n % 1000000000000 > 0)
        {
            word += " ";
            word += Num_To_Word(n %
                                1000000000000000);
        }
    }
    else if (n >= 1000000000000 &&
             n < 1000000000000000)
    {
        word += Num_To_Word(n / 1000000000000);
        word += " Trillion";
        if (n % 1000000000000 > 0)
        {
            word += " ";
            word += Num_To_Word(n %
                                1000000000000);
        }
    }
    else if (n >= 1000000000 && n < 1000000000000)
    {
        word += Num_To_Word(n / 1000000000);
        word += " Billion";
        if (n % 1000000000 > 0)
        {
            word += " ";
            word += Num_To_Word(n % 1000000000);
        }
    }
    else if (n >= 1000000 && n < 1000000000)
    {
        word += Num_To_Word(n / 1000000);
        word += " Million";
        if (n % 1000000 > 0)
        {
            word += " ";
            word += Num_To_Word(n % 1000000);
        }
    }
    else if (n >= 1000 && n < 1000000)
    {
        word += Num_To_Word(n / 1000);
        word += " Thousand";
        if (n % 1000 > 0)
        {
            word += " ";
            word += Num_To_Word(n % 1000);
        }
    }
    else if (n >= 100 && n < 1000)
    {
        word += ones[n / 100];
        word += " Hundred";
        if (n % 100 > 0)
        {
            word += " ";
            word += Num_To_Word(n % 100);
        }
    }
    else if (n >= 20 && n < 100)
    {
        word += tens[n / 10];
        if (n % 10 > 0)
        {
            word += " ";
            word += Num_To_Word(n % 10);
        }
    }
    else
    {
        word += ones[n];
    }
    return word;
}
ull Word_To_Num(string w)
{
    w = ToTitle(w);
    stringstream ss(w);
    list<string> wd;
    string ww;
    int i = 0;
    while (ss.good())
    {
        ss >> ww;
        wd.push_back(ww);
    }
    return Simplify(wd);
}
int main()
{
    string input;
    getline(cin, input);
    if (input.empty())
        input = "18446744073709551615";
    if (isnum(input))
    {
        cout << Num_To_Word(Int(input)) << endl;
    }
    else
    {
        cout << Word_To_Num(input) << " ";
    }
}