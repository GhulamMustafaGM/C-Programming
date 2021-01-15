// Jury's Test Of Stability (Discret Systems Control)

#include <iostream>
using namespace std;

int absVal(int x)
{
    if (x < 0)
        x *= -1;
    return x;
}
int power(int x, int a)
{
    int b = x;
    for (int i(0); i <= a; i++)
    {
        x *= b;
    }
    return x;
}
int main()
{

    int n, a, i(0), j(0), b(0);
    cin >> n; //Highest degree (Order of the equation)
    int jury[2 * n - 3][n + 1];
    for (int i(0); i < 2 * n - 3; i++)
    {
        j = 0;
        while (j <= n)
        {
            jury[i][j] = 0;
            j++;
        }
    }
    for (int i(0); i <= n; i++)
    {
        cin >> a; // Parameters
        jury[0][i] = a;
    }
    i = n;
    j = 0;
    while (i >= 0)
    {
        jury[1][j] = jury[0][i];
        j++;
        i--;
    }
    a = n;
    int p(n), m(0);
    for (int i(2); i < 2 * n - 3; i++)
    {
        j = 0;
        p -= 1;
        a = 0;
        b = 0;
        m = p;
        while (j <= p)
        {

            jury[i][j] = jury[i - 2][0] * jury[i - 2][a] - jury[i - 1][0] * jury[i - 1][b];
            j++;
            a++;
            b++;
        }
        for (int k(0); k <= p; k++)
        {
            jury[i + 1][k] = jury[i][m];
            m--;
        }

        i++;
    }
    cout << endl;
    cout << "Jury's Table:" << endl;
    for (int i(0); i < 2 * n - 3; i++) // Display
    {
        for (int j(0); j <= n; j++)
        {
            cout << jury[i][j] << " ";
        }
        cout << endl;
    }
    // Test...
    int t(0), t1(1), _t(0), _t1(-1);
    cout << endl;
    cout << "Necessary conditions :" << endl;
    i = 0;
    do
    {
        t += t1 * jury[0][i];
        i++;
    } while (i <= n);
    cout << "f(1)=" << t << endl;
    i = 0;
    do
    {
        if (i % 2 == 0)
            _t += jury[0][i];
        else
            _t += jury[0][i] * (-1);
        i++;
    } while (i <= n);
    cout << "f(-1)=" << _t << endl;
    if (t > 0 && _t * power(-1, n) > 0)
        cout << "Necessary conditions :Valid." << endl;
    else
    {
        cout << "Necessary conditions :Not valid. No Stability" << endl;
        goto etiq;
    }
    cout << endl;
    cout << "Sufficients conditions" << endl;
    cout << "|r0|=" << absVal(jury[2 * n - 4][0]) << endl;
    cout << "|r3|=" << absVal(jury[2 * n - 4][2]) << endl;
    cout << "|b0|=" << absVal(jury[2][0]) << endl;
    cout << "|bn|=" << absVal(jury[2][n - 1]) << endl;
    cout << "|a0|=" << absVal(jury[0][0]) << endl;
    cout << "|an|=" << absVal(jury[0][n]) << endl;
    cout << endl;
    if (absVal(jury[2 * n - 4][0]) > absVal(jury[2 * n - 4][2]) && absVal(jury[2][0]) > absVal(jury[2][2]) && absVal(jury[0][0]) < absVal(jury[0][n]))
        cout << "Sufficient Conditions : Valid. The system is stable" << endl;
    else
        cout << "Sufficient conditions : Not valid. The system is not stable" << endl;
etiq:;
    return 0;
}