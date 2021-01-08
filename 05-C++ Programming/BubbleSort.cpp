// Bubble sort

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> integers = {10, 3, 6, 2, 7, 8, 0, 4, -34, 243, -432, 9999999};

    for (int t : integers)
        cout << t << " ";
    cout << endl;

    typedef decltype(integers)::iterator Itr;
    const Itr end = integers.end(), begin = integers.begin();
    Itr left = end - 2;
    Itr right = end - 1;
    size_t cnt = 0;

    while (true)
    {
        if (*left > *right)
        {
            ++cnt;
            //swap
            int temp = *left;
            *left = *right;
            *right = temp;
        }

        if (left == begin)
        {
            left = end - 2;
            right = end - 1;

            if (!cnt)
                break;
            else
            {
                cnt = 0;
                continue;
            }
        }
        --left;
        --right;
    }

    for (int t : integers)
        cout << t << " ";
    cout << endl;
    return 0;
}