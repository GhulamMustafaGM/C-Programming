// tree

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the height of tree" << endl;
    int a;
    cin >> a;
    cout << "Enter the upward steps" << endl;
    int b;
    cin >> b;
    cout << "Enter the downward steps" << endl;
    int c;
    cin >> c;
    int day = (b - c) / a;
    cout << day;
    return 0;
}
