// Sorting

#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int indMax(deque<int> v, int n)
{
    int m;
    for (int i(0); i < n; i++)
    {
        if (i == 0)
            m = i;
        else if (v[i] > v[m])
            m = i;
    }
    return (m);
}

void sorting(deque<int> &v, int n)
{
    int m, j(0), k = n;
    for (int i(0); i < n; i++)
    {
        m = indMax(v, k);
        v.push_back(v[m]);
        v.erase(v.begin() + m);
        k--;
    }
}
int main()
{
    srand(time(0));
    deque<int> dequeArr;
    for (int i(0); i < 10; i++)
    {
        dequeArr.push_back(rand() % 10);
    }
    cout << "Random deque :" << endl;
    for (int i(0); i < dequeArr.size(); i++)
    {
        cout << dequeArr[i] << ' ';
    }
    cout << endl
         << endl;
    cout << "Sorted deque :" << endl;
    sorting(dequeArr, dequeArr.size());
    for (int i(0); i < dequeArr.size(); i++)
    {
        cout << dequeArr[i] << ' ';
    }
    return 0;
}