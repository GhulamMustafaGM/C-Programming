// Descending numbers order

#include <iostream>
using namespace std;
int main()
{
    int num[10];
    int i, j, desc;

    cout << "\n Enter 10 Numbers : \n";
    cout << " ";
    for (i = 0; i < 10; ++i)
        cin >> num[i];

    for (i = 0; i < 10; ++i) //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout << "\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
    {
        cout << " ";
        cout << num[i];
        cout << "\n";
    }
}

/* output 

Enter 10 Numbers :
22 55 99 11 90 22 11 87 51 88

Numbers in Descending Order :
99
90
88
87
55
51
22
22
11
11

*/