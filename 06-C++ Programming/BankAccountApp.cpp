// Bank account program

#include <iostream>

long balance = 10000; // in $
int main()
{
    int input;
    std::cout << "Welcome to My Bank." << std::endl;
    std::cout << "Instructions:-" << std::endl;
    std::cout << "Press 1 to debit money." << std::endl;
    std::cout << "Press 2 to credit money." << std::endl;
    std::cout << "Press 3 to check a/c balance." << std::endl;
    std::cin >> input;

    switch (input)
    {
    case 1:
        std::cout << "Please enter amount." << std::endl;
        std::cin >> input;
        if (balance - input >= 0)
        {
            balance -= input;
            std::cout << "Processing....." << std::endl;
            std::cout << "Transaction successful. Your A/c balance is $" << balance << std::endl;
        }
        else
        {
            std::cout << "Insufficient balance." << std::endl;
        }
        break;

    case 2:
        std::cout << "Please enter amount." << std::endl;
        std::cin >> input;
        balance += input;
        std::cout << "Processing....." << std::endl;
        std::cout << "Transaction successful. Your A/c balance is $" << balance << std::endl;
        break;

    case 3:
        std::cout << "Your A/c balance is $" << balance << std::endl;
        break;

    default:
        std::cout << "Invalid operation." << std::endl;
    }
    return 0;
}