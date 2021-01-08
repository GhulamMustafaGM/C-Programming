// No ( <,>,==,else-if) challenge

#include <iostream>

double getMax(double a, double b)
{
    double c;
    // division a / b will give "0" if b>a and "1.xxx" if b<=a
    // !((int)a/(int)b) will give "1" if b>a, and "0" if b<=a
    // but if b==0 will division by zero appear
    // so: !((int)(a+!a)/(int)(b+!b)) will give "1" if b>a, and "0" if b<=a
    // for a:[0;infinity} and:[0;infinity}
    // b*!((int)(a+!a)/(int)(b+!b)) will geve value of b if b>a, and "0" if b<=a
    // a*!((int)(b+!b)/(int)(a+!a)) + b*!((int)(a+!a)/(int)(b+!b)) will give value of b if b>a, value of a if a>b
    // but if a==b output will be "0"
    // !(a-b)*a will give value of a if a==b
    c = a * !((int)(b + !b) / (int)(a + !a)) + b * !((int)(a + !a) / (int)(b + !b)) + !(a - b) * a;
    return c;
}

int main()
{
    double x = 0, y = 0;
    std::cout << "\nEnter first number (>=): ";
    std::cin >> x;
    std::cout << "\nEnter second number (>=): ";
    std::cin >> y;
    std::cout << "\nMaximum is = " << (double)getMax(x, y) << "\n";
    return 0;
}