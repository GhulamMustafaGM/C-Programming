/* C++ program - find ncr and npr */

#include <iostream>
using namespace std;

long int fact(int); //function declaration

int main()
{
    int n, r;
    long int ncr, npr;

    cout << "\nEnter the value of n: ";
    cin >> n;
    cout << "Enter the value or r: ";
    cin >> r;

    npr = fact(n) / fact(n - r); // calling the function or function calling
    ncr = npr / fact(r);         // function calling

    cout << "NPR value = " << npr << "\n";
    cout << "NCR value = " << ncr << "\n";
}
long int fact(int x) //defining the function or function definition
{
    int i, f = 1;

    for (i = 2; i <= x; i++)
    {
        f = f * i;
    }

    return f;
}

/*output 

Enter the value of n: 7
Enter the value or r: 3
NPR value = 210
NCR value = 35

*/