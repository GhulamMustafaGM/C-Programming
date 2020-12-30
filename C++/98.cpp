// Global Variables

#include <iostream>
using namespace std;

void func1();
void func2();

int count; // this is a global veriable

int main()
{
    int i; // this a local variable

    for (i = 0; i < 10; i++)
    {
        count = i * 2;
        func1();
    }
    return 0;
}
void func1()
{
    cout << "count: " << count; // access global count
    cout << endl;               // output a newline
    func2();
}
void func2()
{
    int count; // this is local variable

    for (count = 0; count < 3; count++)
        cout << '.';
}

/*

count: 0
...count: 2
...count: 4
...count: 6
...count: 8
...count: 10
...count: 12
...count: 14
...count: 16
...count: 18
...

*/