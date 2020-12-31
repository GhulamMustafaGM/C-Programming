// Use struct to create a class.

#include <iostream>
using namespace std;

struct cl
{
    int get_i();       // these are public
    void put_i(int j); // by default
private:
    int i;
};
int cl::get_i()
{
    return i;
}
void cl::put_i(int j)
{
    i = j;
}
int main()
{
    cl s;
    s.put_i(10);

    clout << s.get_i();

    return 0;
}

/* Output: 

10

*/