/*C++ program - fahrenheit to centigrade convesion */
#include <iostream>
using namespace std;

int main()
{
    float fah, cel;

    cout << "\nEnter temperature in Fahrenheit:";
    cin >> fah;

    cel = (fah - 32) / 1.8;
    cout << "Temperature in Celsius = " << cel;
    cout << endl;

    return 0;
}

/*output 

Enter temperature in Fahrenheit:98.6
Temperature in Celsius = 37

*/