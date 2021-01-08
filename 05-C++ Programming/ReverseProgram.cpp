// Reverse the number

#include <iostream>
    using namespace std;
int main()
{
    int num, rev = 0;
    cin >> num;
    cout << "Number you entered:::" << num << endl
         << "Reverse that:::";
    while (num > 0)
    {
        rev = num % 10;
        num = num / 10;

        cout << rev << endl;
    }
}