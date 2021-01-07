// Age verification

#include <iostream>
using namespace std;
/*Enter you age in numbers*/
int main()
{
    int age;
    cin >> age;
    cout << "Your age is " << age << "\n";
    if (age > 14)
    {
        if (age >= 18)
        {
            cout << "\n"
                 << "You are Adult and You can use this site.";
        }
        else
        {
            cout << "\n"
                 << "You are Teenager and You cannot use this site."
                 << "\n"
                 << "\n"
                 << ":D Try again after some years.";
        }
    }
    else
    {
        if (age > 0)
        {
            cout << "\n"
                 << "You are Child and You cannot use this site."
                 << "\n"
                 << "\n"
                 << ":D Try again after some years.";
        }
        else
        {
            cout << "\n"
                 << "Something's Wrong Please try again";
        }
    }

    return 0;
}