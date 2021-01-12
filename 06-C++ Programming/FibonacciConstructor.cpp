// fibonacci series using constructor

#include <iostream>
using namespace std;
class fibo
{
public:
    int a = 0, b = 1, c, n;
    fibo()
    {
        cin >> n;
        cout << "u entered the length: " << n << endl;
        cout << "fibonacci series upto " << n << " number is :" << endl;
        cout << a << " , " << b;
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            cout << " , " << c;
            a = b;
            b = c;
        }
    }
};
int main()
{
    fibo obj;
    return 0;
}