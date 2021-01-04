
#include <iostream>
using namespace std;

int main()
    {
        int a, b, c;
        cout << "Input first number:" << endl;
        cin >> a;
        cout << "Input second number:" << endl;
        cin >> b;
        c = a / b;
        cout << "Result:" << c << endl;
        if (b == 0)
            cout << "Error";
        return 0;
    }