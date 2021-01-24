
#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;

//recursive generate '+' '-' 'space' between numbers + inspection
void generate(list<string> &l, string &numb, int pos = 0, int sum = 100);

//inspection (default 100)
bool insp(string &s, int res = 100);

//main
int main()
{
    string numb = " 1 2 3 4 5 6 7 8 9";
    list<string> var;
    generate(var, numb);
    for (auto elem : var)
        cout << elem << "=100\n";

    return 0;
}

//recursive generate '+' '-' 'space' between numbers + inspection
void generate(list<string> &l, string &numb, int pos, int sum)
{
    static const string element = "+ -";

    if (pos >= numb.length())
    {
        //inspection
        string s = numb;
        if (insp(s, sum))
            l.push_back(s);
        return;
    }

    int i = (pos) ? 0 : 1;
    for (; i < element.size(); i++)
    {
        numb[pos] = element[i];
        generate(l, numb, pos + 2);
    }
}

//inspection
bool insp(string &s, int res)
{
    //erase space
    while (s.find(" ") != -1)
        s.erase(s.find(" "), 1);

    //calculate summa
    int sum = 0, num;
    stringstream buffer(s);
    while (buffer >> num)
        sum += num;

    //inspection
    return (sum == res);
}
