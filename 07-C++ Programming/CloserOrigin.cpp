// Closer the origin Program

#include <iostream>
using namespace std;

int main()
{
    ///////////////////////////
    int xf;
    int yf;
    int xs; //Declare variables.
    int ys;
    double x;
    double z;
    //////////////////////////
    cout << "X1:" << endl;
    cin >> xf;
    cout << "Y1:" << endl;
    cin >> yf; //Accept coordinates.
    cout << "X2:" << endl;
    cin >> xs;
    cout << "Y2:" << endl;
    cin >> ys;
    /////////////////////////
    if (xf < 0)
    {
        xf = xf * (-1);
    }
    if (yf < 0)
    {
        yf = yf * (-1);
    } //Move the points to the first quarter.
    if (xs < 0)
    {
        xs = xs * (-1);
    }
    if (ys < 0)
    {
        ys = ys * (-1);
    }
    ///////////////////////
    x = xf / 2 + yf / 2; //Find the sum of the coordinates of the points.
    z = xs / 2 + ys / 2; //The smaller the sum, the closer the point to the origin.
    ////////////////////////
    if (x > z)
    {
        cout << "The first point is closer to the origin." << endl;
    }
    if (x < z)
    {
        cout << "The first point is closer to the origin." << endl;
    } //Check the conditions.
    else
    {
        cout << "The points are at the same distance from the origin." << endl;
    }
    //////////////////////
    return 0;
}
