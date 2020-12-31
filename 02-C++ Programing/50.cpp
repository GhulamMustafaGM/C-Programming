// Overloading the + operator.

#include <iostream>
using namespace std;

class CL
{

public:
    int count;

    CL operator=(CL obj);
    friend CL operator+(CL ob, int i);
    friend CL operator+(int i, CL ob);
};

CL CL::oprator = (CL obj)
{
    count = obj.count;
    return *this;
}

// This handles ob + int.

CL operator+(CL ob, int i)
{
    CL temp;

    temp.count = ob.count + i;

    return temp;
}

// This handles int + ob.

CL operator+(int i, CL ob)
{
    CL temp;

    temp.count = ob.count + i;

    return temp;
}

int main()
{
    CL O;

    O.count = 10;
    cout << O.count << " "; // outputs 10

    O = 10 + O;             // add object to integer
    cout << O.count << " "; // outps 20

    O = O + 12;      // add integer to object
    cout << O.count; // outputs 32

    return 0;
}

/* output:

10 20 32

*/