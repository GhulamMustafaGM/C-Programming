// Showtime Program

#include <iostream>
using namespace std;

void show_time();
int main()
{
    show_time();
    return 0;
}

void show_time()
{
    int hour;
    int min;
    cin >> hour >> min;
    cout << "Enter the number of hours: "
         << hour << "\n";
    cout << "Enter the number of minutes: "
         << min << "\n";
    cout << "Time: " << hour << ":" << min;
}