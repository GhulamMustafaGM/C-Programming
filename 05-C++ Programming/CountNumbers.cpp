// Count number of digits entered

#include <iostream>
using namespace std;
int main()
{
    unsigned long long num, i = 1, s = 0;
    cin >> num;
    while (i <= num)
    {
        i *= 10;
        s++;
    }
    cout << "number you entered:::" << num << endl
         << "number of digits:::" << s;
}