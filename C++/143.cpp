/* An example using string arrays */

// A simple employye databse program.

#include <iostream>
using namespace std;

char name[10][80];  // this array holds employee names
char phone[10][20]; // their phone numbers
float hours[10];    // hours worked per week
float wage[10];     // wage
int menu();
void enter(), report();
int main()
{
    int choice;
    do
    {
        choice = menu(); // get selection
        switch (choice)
        {
        case 0:
            break;
        case 1:
            enter();
            break;
        case 2:
            report();
            break;
        default:
            cout << "Try again.\n\n";
        }
    } while (choice != 0);
    return 0;
}

// Return a user's selection.

int menu()
{
    int choice;
    cout << "0. Quit\n";
    cout << "1. Enter information\n";
    cout << "2. Report information\n";
    cout << "\nChoose one: ";
    cin >> choice;

    return choice;
}
// Enter information.
void enter()
{
    int i;
    char temp[80];
    for (i = 0; i < 3; i++)
    {
        cout << "Enter last name: ";
        cin >> name[i];
        cout << "Enter phone number: ";
        cin >> phone[i];
        cout << "Enter number of hours worked: ";
        cin >> hours[i];
        cout << "Enter wage: ";
        cin >> wage[i];
    }
}

// Display report.
void report()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << name[i] << ' ' << phone[i] << '\n';
        cout << "Pay for the week: " << wage[i] * hours[i];
        cout << '\n';
    }
}

/* output:

0. Quit
1. Enter information
2. Report information

Choose one: 1
Enter last name: ghulam
Enter phone number: 704422643
Enter number of hours worked: 3
Enter wage: 74221
Enter last name: ali
Enter phone number: 72002332
Enter number of hours worked: 5
Enter wage: 23342
Enter last name: umair
Enter phone number: 70222274
Enter number of hours worked: 6
Enter wage: 272225
0. Quit
1. Enter information
2. Report information

Choose one: 2
ghulam 704422643
Pay for the week: 222663
ali 72002332
Pay for the week: 116710
umair 70222274
Pay for the week: 1.63335e+006
0. Quit
1. Enter information
2. Report information

Choose one: 0
*/