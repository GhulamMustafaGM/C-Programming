/* C++ Programing code to make simple calucaltor */
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    float a, b, res;
    char choice, ch;

    do
    {
        cout << "1.Addition\n";
        cout << "2.Subtraction\n";
        cout << "3.Multiplication\n";
        cout << "4.Division\n";
        cout << "5.Exit\n\n";

        cout << "Enter Your Choice :";
        cin >> choice;

        switch (choice)
        {

        case '1':
            cout << "Enter two numbers:";
            cin >> a >> b;
            res = a + b;
            cout << "Result = " << res << endl;
            break;

        case '2':
            cout << "Enter two numbers:";
            cin >> a >> b;
            res = a - b;
            cout << "Result = " << res << endl;
            break;

        case '3':
            cout << "Enter two numbers:";
            cin >> a >> b;
            res = a * b;
            cout << "Result = " << res << endl;
            break;

        case '4':
            cout << "Enter two numbers:";
            cin >> a >> b;
            res = a / b;
            cout << "Result = " << res << endl;
            break;

        case '5':
            exit(0);
            break;

        default:
            cout << "Wrong Choice..!!!" << endl;
            break;
        }
        cout << "\n.............................................\n";
    } while (choice != 5 && choice != getchar());

    return 0;
}
/* output 

1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit

Enter Your Choice :2
Enter two numbers: 22 3
Result = 19

.............................................
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
*/