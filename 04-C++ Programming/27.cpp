//  Circle Program

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float a, p, r;

    cout << "1.Enter radius of circle:";
    cout << endl
         << "2.Enter The Perimeter of circle:";
    cout << endl
         << "3.Enter The area of circle:";
    cout << endl
         << "Hi! Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter radius";
        cin >> r;
        a = 3.142857 * r * r;
        p = 6.285714 * r;
        cout << endl
             << "The area of circle=" << a;
        cout << endl
             << "The Perimeter of circle=" << p;
    }
    if (choice == 2)
    {
        cout << "Enter Perimeter of circle";
        cin >> p;
        r = p / 6.285714;
        cout << endl
             << "The radius of circle=" << r;
    }
    if (choice == 3)
    {
        cout << endl
             << "Enter the area of circle";
        cin >> a;
        r = sqrt(a / 3.142857);
        cout << endl
             << "The radius of circle=" << r;
    }
    return 0;
}

/* Ouput:

1.Enter radius of circle
2.Enter The Perimeter of circle:
3.Enter The area of circle
Hi! Enter your choice 1
Enter radius3

The area of circle=28.2857
The Perimeter of circle=18.8571

*/