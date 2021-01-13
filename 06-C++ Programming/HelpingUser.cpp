// Helping user

#include <iostream>
#include <vector>
using namespace std;

class A
{                   //class
public:             //access specifier
    static int cnt; //static integer cnt
    A(int a)
    {
        cout << endl
             << "Constructor start: cnt = " << cnt << endl;
    } //constructor
    ~A()
    {
        cout << endl
             << "Destructor start: cnt = " << cnt << endl;
        ++cnt; //increase cnt by 1
        cout << endl
             << "Destructor end: cnt = " << cnt << endl;
    } //destructor
};

int A::cnt = 0; //set static int cnt to 0 using ::
int main()
{ //main start
    vector<A> v(5, 6);
    cout << endl
         << "In Main: cnt = " << A::cnt << endl;
    return 0; //return zero
} //main out of coverage;-)