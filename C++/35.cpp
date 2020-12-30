/* C++ program - centigrade to fahrenheit conversion  */
#include <iostream>
using namespace std;

int main()
{
    float fah, cen;

    cout << "\nEnter temperature in Celsius: ";
    cin >> cen;

    fah = (1.8 * cen) + 32;

    cout << "\nTemperature in Fahrenheit = " << fah;
    cout << endl;

    return 0;
}
/*ouput 
Enter temperature in Celsius: 37

Temperature in Fahrenheit = 98.6

*/