// String function value

#include <iostream>
#include <string>
using namespace std;
template <class T>
int arrlen(T &arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}
void display_str(const string str[], int n);
int main()
{
    int const SIZE = 5;
    string str[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cin >> str[i];
    }
    int n = arrlen(str);
    // cout<<n<<endl;
    display_str(str, n);
    return 0;
}

void display_str(const string str[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (str[i - 1] != "")
            cout << "string " << i << ": "
                 << str[i - 1] << endl;
    }
}