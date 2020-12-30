/*C++ program - calcualte arithmetic mean */
#include <iostream>
using namespace std;

int main()

{
    int n, i, arr[50], sum = 0;

    cout << "How many number you want to enter ?\n";
    cin >> n;

    cout << "Entetr " << n << " Numbers:";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int armean = sum / n;

    cout << "Arithmetic Mean = " << armean;

    return 0;
}

/*output 
How many number you want to enter ?
10
Entetr 10 Numbers:1
2
3
4
5
6
7
8
9
10
Arithmetic Mean = 5
*/