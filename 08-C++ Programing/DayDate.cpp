// Date .. > Day

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convertToDay(int nbD);
int maxMonth(int month, int year)
{
    int monthDays(0);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        monthDays = 31;

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        monthDays = 30;

    else if (month == 2 && ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0)))
        monthDays = 28;

    else
        monthDays = 29;

    return monthDays;
}

class Date
{
public:
    Date(string date);
    friend int dayNumber(Date u, Date p);
    bool inputFail();

private:
    int m_year;
    int m_month;
    int m_day;
};

Date::Date(string date) : m_year(0),
                          m_month(0),
                          m_day(0)
{
    istringstream is;

    for (int i(0); i < date.size(); i++)
    {
        if (date[i] == ':')
            date[i] = ' ';
    }
    is.str(date);
    is >> m_day;
    is >> m_month;
    is >> m_year;
}

int dayNumber(Date u, Date p)
{
    int d = p.m_day - 1;
    int days(1);
    int dayNb(3);
    int m(p.m_month), y(p.m_year);

    while (m != u.m_month || y != u.m_year || days != u.m_day)
    {
        days++;
        d++;
        if (days > maxMonth(m, y))
        {
            m++;
            days = 1;
        }

        if (m > 12)
        {
            y++;
            m = 1;
        }
    }
    for (int i(0); i < d; i++)
    {
        dayNb++;
        if (dayNb > 6)
            dayNb = 0;
    }
    return dayNb;
}

bool Date::inputFail()
{
    return m_year < 1970 || (m_month < 1 || m_month > 12) || (m_day < 1 || m_day > maxMonth(m_month, m_year)) || m_year == 0 || m_day == 0 || m_month == 0;
}

int main()
{
    const Date principalDate("01:01:1970");
    string date;
    string day;
    cout << "NOTE: the date dd:mm:yyyy" << endl;
    cout << "enter the date: ";
    getline(cin, date);
    Date usrDate(date);
    if (usrDate.inputFail())
    {
        cout << "oups! sorry, I can\'t do it" << endl;
        return 1;
    }

    day = convertToDay(dayNumber(usrDate, principalDate));
    cout << day;
    return 0;
}

string convertToDay(int nbD)
{
    string day;
    switch (nbD)
    {
    case 0:
        day = "monday";
        break;

    case 1:
        day = "tuesday";
        break;

    case 2:
        day = "wednesday";
        break;

    case 3:
        day = "thursday";
        break;

    case 4:
        day = "friday";
        break;

    case 5:
        day = "saturday";
        break;

    case 6:
        day = "sunday";
        break;
    }
    return day;
}