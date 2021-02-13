// Using iterators

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> values;
    vector<int>::iterator it;
    int i(0);
    int a(0);
    do
    {
        values.push_back(a);
        a++;
        i++;
    } while (i <= 10);
    for (it = values.begin(); it != values.end(); it++)
        cout << *it << " ";
    return 0;
}