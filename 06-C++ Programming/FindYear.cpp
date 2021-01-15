//Find Year and also enter a negative year for a date in BC

#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cin >> d; 
    cin >> m;
    cin >> y;
    cout << "Date entered: " << d << ":" << m << ":" << y << endl;
    if (d < 1 || m < 1)
    {
        cout << "Enter correct input" << endl;
    }
    int d1 = 1, m1 = 4, y1 = 2018;
    int code = 1;
    if (y < y1 || (y == y1 && m < m1) || (y == y1 && m == m1 && d < d1))
    {
        code = 1;
    }
    else
    {
        code = 0;
    }

    // Loop will be used to count the number of days gap between the saved date and date entered,then the remainder of number of days divided by 7 will tell us the day of the date.

    long i = 0;    // This loop is for the dates before
    if (code == 1) // the saved date
    {
        while (d != d1 || m != m1 || y != y1)
        {
            d++;
            i++;
            if (d > 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
            {
                d = 1;
                m++;
            }
            if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11))
            {
                d = 1;
                m++;
            }
            if (d > 29 && m == 2 && y % 4 == 0 && y % 100 != 0)
            {
                d = 1;
                m++;
            }
            if (d > 28 && m == 2 && y % 4 != 0 && y % 100 != 0)
            {
                d = 1;
                m++;
            }
            if (y % 100 == 0 && y % 400 != 0 && m == 2 && d > 28)
            {
                d = 1;
                m++;
            }
            if (y % 400 == 0 && m == 2 && d > 29)
            {
                d = 1;
                m++;
            }
            if (m > 12)
            {
                m = 1;
                y++;
            }
        }
        int j = i % 7;
        cout << i << " Days before 1st April,2018(sunday)" << endl
             << "It is a ";
        if (j == 0)
        {
            cout << "SUNDAY";
        }
        if (j == 1)
        {
            cout << "SATURDAY";
        }
        if (j == 2)
        {
            cout << "FRIDAY";
        }
        if (j == 3)
        {
            cout << "THURSDAY";
        }
        if (j == 4)
        {
            cout << "WEDNESDAY";
        }
        if (j == 5)
        {
            cout << "TUESDAY";
        }
        if (j == 6)
        {
            cout << "MONDAY";
        }
    }

    long p = 0;    // This loop is for the dates after
    if (code == 0) // the saved date
    {
        while (d != d1 || m != m1 || y != y1)
        {
            d--;
            p++;
            if (d < 1)
            {
                m--;
                if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                {
                    d = 31;
                }
                if (m == 4 || m == 6 || m == 9 || m == 11)
                {
                    d = 30;
                }

                /* If an year is divisible by 4 then it is a leap year but if it is divisible by 100 then it is not a leap year but if it is divisible by 400 then it is a leap year*/
                if (m == 2 && y % 4 == 0 && y % 100 != 0)
                {
                    d = 29;
                }
                if (m == 2 && y % 4 != 0 && y % 100 != 0)
                {
                    d = 28;
                }
                if (m == 2 && y % 100 == 0 && y % 400 != 0)
                {
                    d = 28;
                }
                if (m == 2 && y % 100 == 0 && y % 400 == 0)
                {
                    d = 29;
                }

                if (m < 1)
                {
                    m = 12;
                    y--;
                    d = 31;
                }
            }
        }
        int q = p % 7;
        cout << p << " Days after 1st April 2018(sunday)" << endl
             << "It is a ";
        if (q == 0)
        {
            cout << "SUNDAY";
        }
        if (q == 1)
        {
            cout << "MONDAY";
        }
        if (q == 2)
        {
            cout << "TUESDAY";
        }
        if (q == 3)
        {
            cout << "WEDNESDAY";
        }
        if (q == 4)
        {
            cout << "THURSDAY";
        }
        if (q == 5)
        {
            cout << "FRIDAY";
        }
        if (q == 6)
        {
            cout << "SATURDAY";
        }
    }
    cout << endl
         << "Great!" << endl
         << "Good Luck!";

    return 0;
}