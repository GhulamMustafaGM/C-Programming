// Explanation Vector

#include <iostream>
#include <vector>
using namespace std;

class A
{                   //class
public:             //access specifier
    static int cnt; //static integer cnt
    static int cnt2;
    static int cnt3;
    int a = 0;
    A(int a)
    {
        this->a = a;
        ++cnt2; //increase cnt2 by 1
        cout << endl
             << "Constructor was used: cnt2 = " << cnt2 << endl;
    } //constructor

    A(const A &a2)
    {
        this->a = a2.a;
        ++cnt3;
        cout << endl
             << "Copy ctor was used: cnt3 = " << cnt3 << endl;
    }

    ~A()
    {
        ++cnt; //increase cnt by 1
        cout << endl
             << "Destructor was used: cnt = " << cnt << endl;
    } //destructor
};

int A::cnt = 0;  //set static int cnt to 0 using ::
int A::cnt2 = 0; //set static int cnt2 to 0 using ::
int A::cnt3 = 0; //set static int cnt3 to 0 using ::
int main()
{ //main start
    vector<A> v(5, 1);
    cout << endl
         << "In Main: v[3].a = " << v[3].a << endl; // the same for any
    cout << endl
         << "In Main: cnt = " << A::cnt << endl;
    cout << endl
         << "In Main: cnt2 = " << A::cnt2 << endl;
    cout << endl
         << "In Main: cnt3 = " << A::cnt3 << endl;
    return 0; //return zero
} //main out of coverage;-)