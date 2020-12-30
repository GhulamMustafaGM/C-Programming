/* c++ program - swap two numbers */
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int swap;

    cout << "\nEnter two number :";
    cout << "\nFirst Number:";
    cin >> num1;
    cout "Second Number:";
    cin >> num2;

    swap = num1;
    num1 = num2;
    num2 = swap;

    cout << "The value of first and second number after swapping is \n";
    cout << "First number = " << num1 << "\n"
         << "second number =" << num2;
    cout << endl;

    return 0;
}

/*output 
Enter two number :
First Number:5
Second Number:10
The value of first and second number after swapping is
First number = 10
second number =5
*/