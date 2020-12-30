/* C++ program - calcuate area and perimeter of square */
#include <iostream>
using namespace std;
int main()
{
    int side, peri, area;

    cout << "\nEnter length of a side of square:";
    cin >> side;

    area = side * side;

    peri = 4 * side;

    cout << "Area = " << area << "\tPerimeter=" << peri << endl;

    return 0;
}
/*ouput
nter length of a side of square:6
Area = 36       Perimeter=24
*/