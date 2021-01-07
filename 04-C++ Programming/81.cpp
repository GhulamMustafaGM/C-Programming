// Struct function value time

#include <iostream>
using namespace std;

struct trave_time
{
    int hours;
    int minutes;
};

//NOTE:pass struct by value
trave_time sum_time(trave_time, trave_time);
void show_time(trave_time t);

int main()
{
    trave_time t1 = {5, 46};
    trave_time t2 = {3, 49};

    trave_time t = sum_time(t1, t2);
    show_time(t);
    return 0;
}

trave_time sum_time(trave_time t1, trave_time t2)
{
    const int mins_per_hr = 60;
    trave_time sum_time;
    sum_time.hours =
        t1.hours + t2.hours + (t1.minutes + t2.minutes) / mins_per_hr;

    sum_time.minutes =
        (t1.minutes + t2.minutes) % mins_per_hr;
    return sum_time;
}

void show_time(trave_time t)
{
    cout << t.hours << " hours,"
         << t.minutes << " minutes.\n";
}