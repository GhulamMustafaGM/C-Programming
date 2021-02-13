// array : students performance

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter number of studnets :" << endl;
    cin >> n;

    double ar[n], c1 = 0.0, c2 = 0.0, c3 = 0.0;

    for (i = 0; i < n; i++)
    {

        cout << "Enter item #" << i << ":" << endl;
        cin >> ar[i];

        if (ar[i] >= 0)
        {
            if (ar[i] >= 60)
                c1++;
            else
                c2++;
        }
        else
            c3++;
    }

    cout << "% of passed students " << (c1 / n) * 100.0 << "%" << endl;
    cout << "% of faild students" << (c2 / n) * 100.0 << "%" << endl;
    cout << "% of incorrect students" << (c3 / n) * 100.0 << "%" << endl;
}