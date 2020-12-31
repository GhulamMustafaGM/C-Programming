/* C++ program - Hexadecimal to decimal */
#include <iostream>
#include <cmath>
#include <cstdlib>

unsigned long convtodecnum(char hex[]);

int main()
{
    unsigned long decnum;
    char hex[9]; // 8 characters for 32-bit Hexadecimal number and one for ' '

    cout << "\nEnter 32-bit Hexadecimal number: ";
    cin >> hex;

    decnum = convtodecnum(hex);
    cout << "Value in decimal number is " << decnum << endl;
}
unsigned long convtodecnum(char hex[])
{
    char *hexstr;
    int length = 0;
    const int base = 16; // base of hexdecimal number
    unsigned long decnum = 0;
    int i;

    //Now find the length of hexadecimal number
    for (hexstr = hex; *hexstr != '\0'; hexstr++)
    {
        length++;
    }
    // Now Find Hexadecimal Number
    hexstr = hex;
    for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++)
    {
        // Compare *hexstr with ASCII values
        if (*hexstr >= 48 && *hexstr <= 57) // is *hexstr Between 0-9
        {
            decnum += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
        }
        else if ((*hexstr >= 65 && *hexstr <= 70)) // is *hexstr Between A-F
        {
            decnum += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
        }
        else if (*hexstr >= 97 && *hexstr <= 102) // is *hexstr Between a-f
        {
            decnum += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
        }
        else
        {
            cout << "Invalid Hexadecimal Number \n";
        }
    }
    return decnum;
}

/*output 
Enter 32-bit Hexadecimal number: E5
Value in decimal number is 229

*/