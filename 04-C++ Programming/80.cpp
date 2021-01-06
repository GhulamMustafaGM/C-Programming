// Struct function reference polar

/*
    input:3 4
    output:
    distance = 5
    angle = 53.1301
*/
#include <iostream>
#include <cmath>
using namespace std;

struct rect
{
    double x;
    double y;
};

struct polar
{
    double distance;
    double angle;
};
//Prototypes
void show_polar(polar *dapos);
polar *rect_to_polar(rect *xypos);

int main()
{
    rect *rplace = new rect;
    polar *pplace = new polar;

    while (cin >> rplace->x >> rplace->y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
    }
    delete pplace;
    delete rplace;
    return 0;
}
//Show polar coordinates,converting angle to degrees
void show_polar(polar *dapos)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = "
         << dapos->distance << endl;
    cout << "angle = "
         << dapos->angle * Rad_to_deg << endl;
}

//Convert rectangular to polar coorinates
polar *rect_to_polar(rect *xypos)
{
    polar *answer = new polar;

    answer->distance =
        sqrt(xypos->x * xypos->x + xypos->y * xypos->y);

    answer->angle = atan2(xypos->y, xypos->x);
    return answer;
}