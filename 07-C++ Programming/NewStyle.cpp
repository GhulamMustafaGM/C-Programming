// New Style Syntax in c++

#ifndef NEW_SYNTAX
#define NEW_SYNTAX
#define If if(
#define While while(
#define Then ) \
    {
#define End }
#define Else \
    }        \
    else     \
    {
#define For for(
#include <iostream>

using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "New syntx for c++.Please read the code. It shows how preprocessors can be useful" << endl;
    If 3 > 2 and true Then
        cout << "3 is bigger than 2\n";
    Else
        cout << "This will never be the output\n";
    End int i = 0;
    While i < 5 Then
            cout << add(i, i) << endl;
            i += 2;
    End
        For int s = 0;
        s > -7;
        s-- Then
            cout<< "S is " << s << endl;
    End
}

#endif