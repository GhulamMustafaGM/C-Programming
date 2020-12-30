/*C++ program - check palindrome or not */
#include <iostream>
using namespace std;
int main()
{
    int num, rem, orig, rev = 0;

    cout << "\nEnter a number: ";
    cin >> num;
    orig = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == orig) // check if origional number is equal to its reverse
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palidrome";
    }
    return 0;
}
/*output 
Enter a number: 12321
Palindrome

Enter a number: 1232
Not palidrome
*/