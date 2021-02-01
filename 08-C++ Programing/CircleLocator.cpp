// Circle locator

#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.141;
int rad, x, y;
float angle, i, l, h, cc, totLen;
char quad;

int main()
{

    cin >> rad;

    if (rad == false)
    {
        rad = 1;
    }

    totLen = 2 * (pi * rad);

    while (i <= totLen)
    {
        i += 0.10;
        cc = i;

        angle = ((cc * 360.0) / totLen);

        if (angle >= 1 && angle <= 90)
        {
            quad = 'A';
        }
        if (angle >= 91 && angle <= 180)
        {
            quad = 'B';
        }
        if (angle >= 181 && angle <= 270)
        {
            quad = 'C';
        }
        if (angle >= 271 && angle <= 360)
        {
            quad = 'D';
        }
        if (angle > 360)
        {
            angle -= 360;
        }

        l = (cos(angle * pi / 180) * rad);
        h = (sin(angle * pi / 180) * rad);

        switch (quad)
        {
        case 'A':
            x = 91 + ((90.0 / rad) * l);
            y = 91 + ((90.0 / rad) * h);
            break;

        case 'B':
            x = 91 + ((90.0 / rad) * l);
            y = 90 + ((90.0 / rad) * h);
            break;

        case 'C':
            x = 91 + ((90.0 / rad) * l);
            y = 91 + ((90.0 / rad) * h);
            break;

        case 'D':
            x = 91 + ((90.0 / rad) * l);
            y = 91 + ((90.0 / rad) * h);
            break;
        }

        cout << " (" << x << " , " << y << ")"
             << " @ Quadrent: " << quad << " " << angle << endl;
    }

    return 0;
}