/* C++ Program - Print Pascal Triangle */

#include <iostream>
using namespace std;

long fact(int);
int main()
{

    int i, n, c;

    cout << "Upto how many line (Enter number of rows) : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (c = 0; c <= (n - i - 2); c++)
        {
            cout << " ";
        }
        for (c = 0; c <= i; c++)
        {
            cout << fact(i) / (fact(c) * fact(i - c));
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}

long fact(int n)
{
    int c;
    long res = 1;
    for (c = 1; c <= n; c++)
    {
        res = res * c;
    }
    return (res);
}
/*output
      
	 1
	1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1

*/