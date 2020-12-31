/* C++ program - calcualte area and perimeter of rectangele */
#include <iostream>
using namespace std;

int main()
{
    int len, bre, peri, area;

    cout << "\nEnter length and breadth of the rectangel: ";
    cin >> len >> bre;

    area = len * bre;
    peri = (2 * len) + (2 * bre);

    cout << "Area = " << area << "\tPerimeter=" << peri;
    cout << endl;

    return 0;
}
/*ouput
Enter length and breadth of the rectangel: 6
4
Area = 24       Perimeter=20

*/