// Cafe menu

#include <iostream>
using namespace std;

int main()
{

    int menu;
    cin >> menu;

    cout << "======================= \n";
    cout << " Welcome to Cafe menu \n";
    cout << "======================= \n \n";

    switch (menu)
    {
    case 1:
        cout << "Your order is Moldy Cheese.\n Thank you. \n Come again soon.";
        break;

    case 2:
        cout << "Your order is Peanut Beetle. \n Thank you. \n Come again soon.";
        break;

    case 3:
        cout << "Your order is Bloody Pie. \n Thank you. \n Come again soon.";
    }

    return 0;
}

// number validity

#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    while (number < 10)
    {
        cout << "Not a valid number: " << number << endl;
        number++;
    };
    while (number >= 10)
    {
        cout << "This is a valid number: " << number << endl;
        number++;
    };
    return 0;
}
