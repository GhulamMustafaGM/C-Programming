// Pointer-to-member example.

#include <iostream>
using namespace std;
class myclass
{
public:
    int sum;
    void myclass::sum_it(int x);
};
void myclass::sum_it(int x)
{
    int i;
    sum = 0;
    for (i = x; i; i--)
        sum += i;
}
int main()
{
    int myclass::*dp;           // pointer to an integer class member
    void (myclass::*fp)(int x); // pointer to member function
    myclass c;

    dp = &myclass::sum;    // get address of data
    fp = &myclass::sum_it; // get address of function

    (c.*fp)(7); // compute summation of 7
    cout << "summation of 7 is " << c.*dp;
    return 0;
}

/* output:

Error output.

*/