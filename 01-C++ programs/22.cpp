/*C++ program - Inerchange numbers*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Enter value of A and B :\n";
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Number interchanged successfully..!!!";
    cout << "A = " << a << "\n"
        << "B = " << b << endl;
    return 0;
}
/*output 
Enter value of A and B :
A = 2
B = 4
Number interchanged successfully..!!!
A = 4
B = 2
*/