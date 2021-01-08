// Eucliaden distance

// In mathematics, the Euclidean distance or Euclidean metric is the "ordinary" straight-line distancebetween two points in Euclideanspace. With this distance, Euclideanspace becomes a metric space. The associated norm is called theEuclidean norm. Older literature refers to the metric as Pythagorean metric.

// Input 4 number

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