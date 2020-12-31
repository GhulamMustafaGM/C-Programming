// A simple example using an object pointer.

#include <iostream>
using namespace std;

class P_example
{
    int num;

public:
    void set_num(int val) { num = val; }
    void show_num();
};
void P_example::show_num()
{
    cout << num << "\n";
}
int main()
{
    P_example ob, *p; // declare an object and pointer to it
    ob.set_num(1);    // access ob directly
    ob.show_num();
    p = &ob;       // assign p the address of ob
    p->show_num(); // access ob using pointer

    return 0;
}

/* ouput:

1
1

*/