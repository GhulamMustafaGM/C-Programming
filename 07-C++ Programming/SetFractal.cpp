// Set fractal

#include <iostream>
#include <complex>

using namespace std;

int main()
{
    const int maxRow = 40;
    const int maxColumn = 90;
    const int maxIteration = 100;

    for (int row = 0; row <= maxRow; ++row)
    {
        for (int column = 0; column < maxColumn; ++column)
        {
            complex<float> z, c = {
                                  (float)column * 2 / maxColumn - 1.5f, (float)row * 2 / maxRow - 1};

            int iteration = 0;
            do
            {
                z = pow(z, 2) + c;
            } while (abs(z) < 4 && ++iteration < maxIteration);

            //cout << (iteration == max_iteration ? '*' : '-');
            cout << ((iteration == maxIteration) ? ' ' : (char)('0' + iteration));
        }

        cout << endl;
    }

    return 0;
}
