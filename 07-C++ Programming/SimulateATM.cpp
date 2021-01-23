// AUTOMATIC TELLER MACHINE (ATM) SIMULATOR

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int x;
    double y = 50.00;

    int deposit = y + deposit;
    int withdraw = y - withdraw;

    cout << "\n   ***ATM MACHINE OPTIONS***   " << endl;
    cout << "      Select an option!      ";
    cout << "\n\n      1. Show current balance.\n\n      2. Deposit Money.      " << endl;
    cout << "\n\n      3. Withdraw Money.\n\n      4. Quit.      " << endl;

    cin >> x;

    switch (x)
    {

    case 1:
        cout << "1. Current Balance is GHC " << y << ".00" << endl;
        break;
    case 2:
        cout << "Enter amount to deposit >> ";
        cin >> deposit;
        cout << "\nCurrent Balance: GHC 50.00 \nDeposit Amount: GHC " << deposit << ".00"
             << "\nNew Total: GHC " << deposit + y << ".00" << endl;
        break;
    case 3:
        cout << "Enter amount to withdraw >> ";
        cin >> withdraw;
        cout << "\nCurrent Balance: GHC 50.00 \nWithdrawal Amount: GHC " << withdraw << ".00"
             << "\nNew Total: GHC " << y - withdraw << ".00" << endl;
        break;
    case 4:
        cout << "4. Press any key to quit " << endl;
        break;
    default:
        cout << "\a You Entered an invalid option **ERROR 404**" << endl;
    }

    return 0;
}