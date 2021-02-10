// Math template

#include <iostream>

using namespace std;

class Math
{
public:
    float add(float a, float b)
    {
        return a + b;
    }
    float subtract(float a, float b)
    {
        return a - b;
    }
    float multiply(float a, float b)
    {
        return a * b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }
    int modulus(int a, int b)
    {
        return a % b;
    }
};

int main()
{
    Math math;

    return 0;
}