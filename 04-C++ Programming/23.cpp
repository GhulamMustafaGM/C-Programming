// Cashier

#include <iostream>

int main()
{
    int option, price, item, total, pay, change;
    char n;
    do
    {
        std::cout << "   EXPENSIVE STATIONERY SHOP    " << std::endl;
        std::cout << "        EMPOWERED BY C++        " << std::endl;
        std::cout << "  SOMEWHERE ON MY IMAGINATION   " << std::endl;
        std::cout << "================================" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "List Of Merchandise \t Price" << std::endl;
        std::cout << "1. Pencil\t\tUS$ 1" << std::endl;
        std::cout << "2. Pen\t\t\tUS$ 4" << std::endl;
        std::cout << "3. Ruler\t\tUS$ 2" << std::endl;
        std::cout << "4. Book\t\t\tUS$ 3" << std::endl;
        std::cout << '\n'
                  << "Input Your Choice(number only):";
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << '\n'
                      << "Pencil" << std::endl;
            price = 1;
            std::cout << "How Many:";
            std::cin >> item;
            total = price * item;
            std::cout << "Total Payment:  US$  " << total << std::endl;
            std::cout << "Your Payment:  US$  ";
            std::cin >> pay;
            change = pay - total;
            std::cout << "Your Change: US$   " << change << std::endl;
            std::cout << "Anything Else: (Y/N)";
            std::cin >> n;
            break;
        case 2:
            std::cout << '\n'
                      << "Pen" << std::endl;
            price = 4;
            std::cout << "How Many:";
            std::cin >> item;
            total = price * item;
            std::cout << "Total Payment:  US$  " << total << std::endl;
            std::cout << "Your Payment:  US$  ";
            std::cin >> pay;
            change = pay - total;
            std::cout << "Your Change: US$   " << change << std::endl;
            std::cout << "Anything Else: (Y/N)";
            std::cin >> n;
            break;
        case 3:
            std::cout << '\n'
                      << "Ruler" << std::endl;
            price = 2;
            std::cout << "How Many:";
            std::cin >> item;
            total = price * item;
            std::cout << "Total Payment:  US$  " << total << std::endl;
            std::cout << "Your Payment:  US$  ";
            std::cin >> pay;
            change = pay - total;
            std::cout << "Your Change: US$   " << change << std::endl;
            std::cout << "Anything Else: (Y/N)";
            std::cin >> n;
            break;
        case 4:
            std::cout << '\n'
                      << "Book" << std::endl;
            price = 3;
            std::cout << "How Many:";
            std::cin >> item;
            total = price * item;
            std::cout << "Total Payment:  US$  " << total << std::endl;
            std::cout << "Your Payment:  US$  ";
            std::cin >> pay;
            change = pay - total;
            std::cout << "Your Change: US$   " << change << std::endl;
            std::cout << "Anything Else: (Y/N)";
            std::cin >> n;
            break;
        default:
            std::cout << "Your Item Number Is not Valid";
        }
    } while (n == 'Y' || n == 'y');
    std::cout << "Thank you For Your Purchase";
    return 0;
}

/* output 

EXPENSIVE STATIONERY SHOP
        EMPOWERED BY C++
SOMEWHERE ON MY IMAGINATION
================================

List Of Merchandise      Price
1. Pencil               US$ 1
2. Pen                  US$ 4
3. Ruler                US$ 2
4. Book                 US$ 3

Input Your Choice(number only):

*/