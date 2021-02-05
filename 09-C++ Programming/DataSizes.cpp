
// Size of data types

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of bool:\t\t" << sizeof(bool) << " byte." << endl;
    cout << "Size of char:\t\t" << sizeof(char) << " byte." << endl;
    cout << "Size of wchar_t:\t" << sizeof(wchar_t) << " byte." << endl;
    cout << "Size of char16_t:\t" << sizeof(char16_t) << " byte." << endl;
    cout << "Size of char32_t:\t" << sizeof(char32_t) << " byte." << endl;

    cout << "Size of int:\t\t" << sizeof(int) << " bytes." << endl;
    cout << "Size of short:\t\t" << sizeof(short) << " bytes." << endl;
    cout << "Size of long:\t\t" << sizeof(long) << " byte." << endl;
    cout << "Size of float:\t\t" << sizeof(float) << " byte." << endl;
    cout << "Size of long long:\t\t" << sizeof(long long) << " bytes." << endl;
    cout << "Size of double:\t\t" << sizeof(double) << " byte." << endl;
    cout << "Size of long double:\t" << sizeof(long double) << " bytes." << endl;
    return 0;
}
