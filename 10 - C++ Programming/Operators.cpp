// operator +

#include <iostream>
using namespace std;
class Test

{
public:
    int x;
    Test(int val) { x = val; }

    int operator+(Test &Obj)
    {
        return Obj.x * 2;
    }
    int operator+(int val)
    {
        return x - val;
    }
};
int main()
{
    Test A(10), B(20);
    cout << (A + B) << " " << (B + 3);

    return 0;
}