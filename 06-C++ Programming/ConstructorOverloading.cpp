
// Constructor overloading

#include <iostream>
using namespace std;
class abc
{
    int width, height;

public:
    abc();
    abc(int, int);
    int area()
    {
        return (width * height);
    }
};
abc::abc()
{
    width = 5;
    height = 5;
}
abc::abc(int a, int b)
{
    width = a;
    height = b;
}
int main()
{
    abc obj1(3, 4);
    abc obj2;
    cout << "obj1 area: " << obj1.area() << endl;
    cout << "obj2 area: " << obj2.area() << endl;
    return 0;
}