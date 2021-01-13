// Time

#include <iostream>
using namespace std;
void my_function(int a, int b)
{
    cout << "Time " << a << ":" << b << endl;
}
int main()
{
    cout << "Enter the number of hours:\n";
    int hours, minutes;
    cin >> hours;
    cout << "Enter the number of minutes:\n";
    cin >> minutes;
    my_function(hours, minutes);
    return 0;
}