// Black fridays program

#include <stdio.h>

bool isHard(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int blackFridayInYear(int td, int dIm[12], bool H)
{

    int s = 0;
    int tmount = 0;

    if (H)
    {
        dIm[1] = 29;
    }
    else
    {
        dIm[1] = 28;
    }

    while (tmount < 12)
    {

        td = td % 7;
        if ((td + 12) % 7 == 4)
        {
            s++;
        }

        td += dIm[tmount];

        tmount++;
    }

    return (s);
}

int main()
{
    bool H;
    int bf = 0;
    int year = 2001;     
    int td = 0;          
    int stopYear = 2101; 
    int dInMonth[12] =
        {
            31, 28, 31, 30,
            31, 30, 31, 31,
            30, 31, 30, 31};

    while (year < stopYear)
    {
        H = isHard(year);

        bf += blackFridayInYear(td, dInMonth, H);

        if (H)
        {
            td = td + 366;
        }
        else
        {
            td = td + 365;
        }
        td = td % 7;
        year++;
    }

    printf("%i\n", bf);

    getchar();
    return 0;
}
