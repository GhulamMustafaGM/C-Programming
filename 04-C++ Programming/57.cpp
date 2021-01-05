// Template Function 

#include <iostream>
using namespace std;
//typename<=>class
//swap int double or float...
template <class Any>
void my_swap(Any &x, Any &y)
{
    Any temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 7;
    int y = 8;
    double a = 3.0;
    double b = 190.0;
    string s = "sssss";
    string h = "hhhhhh";
    my_swap(x, y);
    cout << x << " " << y << endl;
    my_swap(a, b);
    cout << a << " " << b << endl;
    cout << h << " " << s;
    return 0;
}