/* A function can be a member of one class and
a friend of another. */
#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;
class C2; // forward declaration
class C1
{
    int status; // IDLE if off, INUSE if on screen

    // ...

public:
    void set_status(int state);
    int idle(C2 b); // now a member of C1
};
class C2
{
    int status; // IDLE if off, INUSE if on screen
    // ...

public:
    void set_status(int state);
    friend int C1::idle(C2 b); // a friend, here
};
void C1::set_status(int state)
{
    status = state;
}

void C2::set_status(int state)
{
    status = state;
}

// idle() is member of C1, but friend of C2.

int C1::idle(C2 b)
{
    if (status || b.status)
        return 0;
    else
        return 1;
}

int main()
{
    C1 x;
    C2 y;
    x.set_status(IDLE);
    y.set_status(IDLE);
    if (x.idle(y))
        cout << "Screen Can Be Used.\n";
    else
        cout << "Pop-up In Use.\n";
    x.set_status(INUSE);
    if (x.idle(y))
        cout << "Screen Can Be Used.\n";
    else
        cout << "Pop-up In Use.\n";

    return 0;
}

/* Output:

Screen Can Be Used.
Pop-up In Use.

*/