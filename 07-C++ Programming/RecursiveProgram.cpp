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