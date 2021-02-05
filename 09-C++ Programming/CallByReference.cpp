// Call by reference

#include <iostream>
using namespace std;

void setA(int &a)
{

    // variable is changed because its address was included

    a = 5;
}

int main()
{

    int a = 3;

    cout << "a before the function = " << a << "\n\n";

    setA(a);

    cout << "a after the function = " << a << "\n\n";

    return 0;
}
