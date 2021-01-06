// Temperature

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float f, c;
    cout << "1.Farenheit to celsius";
    cout << endl
         << "2.Celsius to farenheit";
    cout << endl
         << "Enter your choice";
    cin >> choice;
    if (choice == 1)
    {
        cout << endl
             << "Enter Temperature in farenheit";
        cin >> f;
        c = (f - 32) / 1.8;
        cout << endl
             << "Temperature in Celsius=" << c;
    }
    if (choice == 2)
    {
        cout << "Enter the celsius value:";
        cin >> c;
        f = 1.8 * c + 32;
        cout << endl
             << "Temperature in Farenheit=" << f;
    }
    return 0;
}