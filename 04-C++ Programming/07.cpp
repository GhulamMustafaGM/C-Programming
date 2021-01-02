// Back tracking program 

#include <iostream>
using namespace std;

#define n 4
int x[n + 1];
#define availableValues 4

void show();
bool cond(int k);
void back();
int main()
{

    back();
    return 0;
}

void back()
{
    int k;
    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    k = 0;
    while (k >= 0)
        if (k == n)
        {
            x[k] = 0;
            k--;
            show();
        }
        else
        {
            if (x[k] < availableValues)
            {
                x[k]++;
                if (cond(k))
                    k++;
            }
            else
            {
                x[k] = 0;
                k--;
            }
        }
}

void show()
{
    cout << endl
         << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << "]";
}

bool cond(int k)
{
    for (int i = 0; i < k; i++)
    {
        if (x[i] == x[k])
        {
            return false;
        }
    }
    return true;
}