#include <iostream>

using namespace std;

void permutations(string &b, string &e)
{
    if (e.size() == 0)
        cout << b << endl;
    else
        for (int i = 0; i < e.size(); ++i)
        {
            char c = e[i];
            b.push_back(c);
            e.erase(i, 1);
            permutations(b, e);
            e.insert(i, 1, c);
            b.pop_back();
        }
}

int main()
{
    int n;

    cin >> n;
    string b = "";
    string e = "";
    for (int i = 0; i < n; ++i)
        e += 'A' + i;
    permutations(b, e);
    return 0;
}