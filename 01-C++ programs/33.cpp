/*C++ program - calcuate area and circumference of circle */

#include <iostream>
using namespace std;

int main()
{
    float r, area, circum;
    cout << "\nEnter the radious of the circle:";
    cin >> r;

    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    cout << "Area of the circle = " << area << "\nCircumference of the circle = "
         << circum << endl;

    return 0;
}
/*output 
Enter the radious of the circle:5
Area of the circle = 78.5
Circumference of the circle = 31.4

*/