// Default arguments

#include <iostream>
using namespace std;

int sum(int x = 20, int y = 30)
{
    int result = x + y;
    return result;
    // Create a function sum()
}

int volume(int l = 3, int w = 4, int h = 5)
{
    return l * w * h / 2;
    // Create a function volume()
    // for triangles volume
}

int main()
{
    int n = 40;
    int m = 60;
    // declare n = 40 and m = 60

    int total_NM = n + m;
    // declare total_NM = n + m

    // Function sum()

    int total = sum(n, m);
    cout << "total = " << total << endl;
    // total = sum(n + m)

    int total2 = sum(n);
    cout << "total2 = " << total2 << endl;
    // total2 = sum(n + y)

    int total3 = sum();
    cout << "total3 = " << total3 << endl;
    // total3 = sum(x + y)

    int total4 = sum() + total_NM;
    cout << "total4 = " << total4 << endl;
    // total4 = sum(x + y) + total_NM

    int total5 = total * 2 - total2 - total3 + total4;

    cout << "total5 = " << total5 << endl;
    /* total5 = sum(n + m) * 2 - sum(n + y)
     - sum(x + y) + (sum(x + y) + total_NM) */

    cout << endl;

    // Function volume()

    int triangle_Volume = volume(2, 2, 2);
    cout << "Triangle Volume = ";
    cout << triangle_Volume << endl;
    // 2 * 2 * 2 / 2

    int triangle_Volume2 = volume(2, 2);
    cout << "Triangle Volume2 = ";
    cout << triangle_Volume2 << endl;
    // 2 * 2 * 5 / 2

    int triangle_Volume3 = volume(2);
    cout << "Triangle Volume3 = ";
    cout << triangle_Volume3 << endl;
    // 2 * 4 * 5 / 2

    int triangle_Volume4 = volume();
    cout << "Triangle Volume4 = ";
    cout << triangle_Volume4 << endl;
    // 3 * 4 * 5 / 2
}