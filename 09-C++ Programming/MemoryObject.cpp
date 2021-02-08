// Placement of the object in memory

#include <iostream>
#include <new>
using namespace std;

class Point
{

    int x;
    int y;

public:
    Point() : x(0), y(0) {}

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    ~Point() {}

    void SetX(int x)
    {
        this->x = x;
    }

    void SetY(int y)
    {
        this->y = y;
    }

    int GetX()
    {
        return x;
    }

    int GetY()
    {
        return y;
    }
};

int main()
{

    //allocate memory
    //why char - because char == 1 byte...
    char *ptr = new char[sizeof(Point)];

    //place the object 1;
    Point *ptrPnt = new (ptr) Point();

    //data of object 1;
    ptrPnt->SetX(2);
    ptrPnt->SetY(5);
    cout << "Object 1: x = " << ptrPnt->GetX() << ", y = " << ptrPnt->GetY() << endl;

    //address of the memory
    cout << "Address: " << ptrPnt << endl;

    //destroy the object 1
    ptrPnt->~Point();

    //place the object 2
    ptrPnt = new (ptr) Point(7, 9);

    //data of object 2
    cout << "Object 2: x = " << ptrPnt->GetX() << ", y = " << ptrPnt->GetY() << endl;

    //address of the memory
    //check that it is one and the same memory area
    cout << "Address: " << ptrPnt << endl;

    //destroy the object 2
    ptrPnt->~Point();

    //free up memory
    delete[] ptr;

    return 0;
}