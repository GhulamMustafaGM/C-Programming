// Function overloading

#include <iostream>
using namespace std;

void printNum(int x)
{
    cout << "Prints an integer: " << x << endl;
}
void printNum(float x)
{
    cout << "Prints a float: " << x << endl;
}

int main()
{
    int a = 16;
    float b = 54.541;
    printNum(a);
    printNum(b);
}