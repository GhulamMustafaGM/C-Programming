// Overlap Program

#include <iostream>
#include <iomanip>
#include <cmath>
#define fct static_cast<float>
using namespace std;
class Coord
{
    int x, y;
public:
    Coord(int xc = 0, int yc = 0) : x(xc), y(yc) {}
    void Get() { cin >> x >> y; }
    int X() { return x; }
    int Y() { return y; }
    bool operator<(const Coord &c)
    {
        return sqrt(x * x + y * y) <
               sqrt(c.x * c.x + c.y * c.y);
    }
};
void Plot(Coord c, Coord d, int w, int h)
{
    int h2 = d.Y() - c.Y(), w2 = d.X() - c.X();
    for (int i = 0; i <= h + h2; i++)
    {
        for (int j = 0; j <= w + w2; j++)
        {
            if ((j == 0 && i < h) || (i == 0 && j < w) || (i == h && j < w) || (i < h && j == w) || (i == h && j == w) || (j == w2 && i >= h2) || (j >= w2 && i == h2) || (j > w2 && i == h2 + h) || (i > h2 && j == w2 + w) || (i == h2 && j == w2) || (i == h + h2 && j == w + w2))
                cout << "* ";
            else if ((i > h2 && j > w2 && j < w && i < h))
                cout << "+ ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
int main()
{
    Coord c1, c2;
    int h, w;
    cin >> w >> h;
    c1.Get();
    c2.Get();
    if (c2 < c1)
        swap(c1, c2);
    Coord
        c3(c1.X() + w, c1.Y() + h);
    double sa, la = h * w;
    sa = (c3.X() - c2.X()) * (c3.Y() - c2.Y());
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "Overlap : " << fct((sa * 100) / la) << " %";
    cout << "\n\n";
    if (w < 20)
        Plot(c1, c2, w, h);
}