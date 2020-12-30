/* C++ program - find largest of three numbers */

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int big;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    //let a is the biggest
    big = a;
    if (big < b)
    {
        if (b > c)
        {
            big = b;
        }
        else
        {
            big = c;
        }
    }
    else if (big > c)
    {
        if (c > b)
        {
            big = c;
        }
        else
        {
            big = b;
        }
    }
    else
    {
        big = a;
    }
    cout << "Biggest numberis " << big;
    cout << endl;

    return 0;
}
/*output 
Enter three numbers: 2
3
4
Biggest numberis 4

*/