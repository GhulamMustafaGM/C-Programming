/*C++ program - check Armstrong or not */
#include <iostream>
using namespace std;

int main()
{
    int n, nu, num = 0, rem;

    cout << "\nEnter any positive number:";
    cin >> n;
    nu = n;

    while (nu != 0)
    {
        rem = nu % 10;
        num = num + rem * rem * rem;
        nu = nu / 10;
    }
    if (num == n)
    {
        cout << "Armstrong number";
        cout << endl;
    }
    else
    {
        cout << "Not Armstrong number" << endl;
    }

    return 0;
}
/*output
Enter any positive number:153
Armstrong number

Enter any positive number:12
Not Armstrong number

*/