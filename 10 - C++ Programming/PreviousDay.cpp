// Previous day

#include <iostream>
#include <string>
using namespace std;

int leap(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

int main()
{
    int day, year, prev_day, prev_year, month, prev_month;

    //cout<<"Enter the date(date month year): ";
    cin >> day >> month >> year;

    if (day != 1)
    {
        prev_day = day - 1;
        prev_month = month;
        prev_year = year;
    }
    else if (month == 1)
    {
        prev_day = 31;
        prev_month = 12;
        prev_year = year - 1;
    }
    else if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11)
    {
        prev_day = 31;
        prev_month = month - 1;
        prev_year = year;
    }
    else if (month == 3)
    {
        prev_day = leap(year) ? 29 : 28; //Function leap year returns 1 if the year is leap else it returns 0
        prev_month = month - 1;
        prev_year = year;
    }
    else
    {
        prev_day = 30;
        prev_month = month - 1;
        prev_year = year;
    }

    cout << "You entered: " << day << " : " << month << " : " << year << endl;
    cout << "Previous Day: " << prev_day << " : " << prev_month << " : " << prev_year << endl;

    return 0;
}