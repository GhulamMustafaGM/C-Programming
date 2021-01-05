// Euclidean distance program

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Euclidean distance for (" << x1 << "," << y1 << ") & (" << x2 << "," << y2 << ") is=";
    int x = pow((x1 - x2), 2);
    int y = pow((y1 - y2), 2);
    cout << pow((x + y), .5);
    return 0;
}

/* ouput

2
3
3
4
Euclidean distance for (2,3) & (3,4) is=1.41421

*/