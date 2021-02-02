// Find vector

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    string val;
    v.push_back("aaa");
    v.push_back("bbb");
    v.push_back("ccc");
    v.push_back("ddd");
    val = "ccc";
    auto p = find(begin(v), end(v), val);
    if (p != v.end())
    {
        cout << p - v.begin() << endl;
    }
    else
    {
        cout << val << " not found" << endl;
    }

    return 0;
}