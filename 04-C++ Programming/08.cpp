// Book program

/* Title:A book shop maintains the inventory of books that are being sold at the shop. The list
            includes details such as author, title, price, publisher and stock position. Whenever a
            customer wants a book, the sales person inputs the title and author and the system
            searches the list and displays whether it is available or not. If it is not, an appropriate
            message is displayed. If it is, then the system displays the book details and requests
            for the number of copies required. If the requested copies book details and requests
            for the number of copies required. If the requested copies are available, the total cost
            of the requested copies is displayed; otherwise the message “Required copies not in
            stock” is displayed.Design a system using a class called  books with suitable member functions and
            Constructors. Use  new operator in constructors to allocate memory space required.
            Implement C++ program for the system.
ASSIGNMENT NO. : 
GROUP          : 
ROLL NO.       : 
BATCH          : 
===============================================================================================================*/
#include <iostream>
#include <string.h>
using namespace std;
class book
{
public:
    char author[50];
    char publisher[50];
    char bookname[50];
    float price;
    int copies;

    book()
    {
        char *bookname = new char[50];
        char *author = new char[50];
        char *publisher = new char[50];
        int copies = 0;
        float price = 0.0;
    }
    void accept();
    void display();
};
void book::accept()
{
    cout << "\n\n\t\t Enter TITLE : ";
    cin >> bookname;
    cout << "\n\n\t\t Enter AUTHOR NAME  : ";
    cin >> author;
    cout << "\n\n\t\t Enter PUBLISHER : ";
    cin >> publisher;
    cout << "\n\n\t\t Enter NUMBER OF COPIES AVAILABLE : ";
    cin >> copies;
    cout << "\n\n\t\t Enter PRICE OF A SINGLE BOOK : ";
    cin >> price;
}
void book::display()
{
    cout << "\n\t " << bookname << " |\t| " << author << " |\t| " << publisher << " |\t| " << copies << " |\t| " << price << " \n ";
}

int main()
{
    book b[30];
    char nm[50], auth[50];
    int i, count = 0, ch, cpy, flag = 0;
    float total;
    cout << "\n\n\t\t\t ***** PROGRAM FOR BOOKS RECORD *****";
    cout << "\n\t\t-----------------------------------------------------------------------";
    do
    {
        cout << "\n\n\t\t **** MENU ****";
        cout << "\n\n\t 1]. Enter Details of Books";
        cout << "\n\t 2]. Display Available Books";
        cout << "\n\t 3]. Search for a Book";
        cout << "\n\t 4]. Exit";
        cout << "\n\n\t\t Enter your choice  : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please enter book deatils as asked below";
            b[count].accept();
            count++;
            break;
        case 2:
            cout << "\n\n\t\t Available books are as follows";
            cout << "\n\n\t TITLE |  | AUTHOR |  | PUBLISHER |  | COPIES |  | PRICE \n ";
            for (i = 0; i < count; i++)
            {
                b[i].display();
            }
            break;
        case 3:
            flag = 0;
            cout << "\n\n\t\t Search for a book you want to buy";
            cout << "\n\n\t\t Enter the name of a book : ";
            cin >> nm;
            cout << "\n\n\t\t Enter author name : ";
            cin >> auth;
            for (i = 0; i < count; i++)
            {
                if (strcmp(nm, b[i].bookname) == 0 && strcmp(auth, b[i].author) == 0)
                {
                    flag = 1;
                    cout << "\n\n\t\t Entered books is available to us and its details are as given below";
                    b[i].display();
                    cout << "\n\n\t Enter how many copies you want to buy : ";
                    cin >> cpy;

                    if (b[i].copies >= cpy)
                    {
                        total = cpy * b[i].price;
                        cout << "\n\n\t\t Entered number of copies are available to us";
                        cout << "\n\n\t\t Total price of book " << nm << " with number of copies " << cpy << " is : " << total;
                    }
                    else
                    {
                        cout << "\n\n\t\t Entered number of copies are not available to us";
                    }
                }
            }

            if (flag == 0)
            {
                cout << "\n\n\t\t Entered name of book is not available to us";
            }

            break;
        case 4:
            return 1;
            break;
        }
    } while (ch != 4);
    return 0;
}

//************ OUTPUT **************//
/*
  ***** PROGRAM FOR BOOKS RECORD *****
        -----------------------------------------------------------------------

         **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 1


        Please enter book deatils as asked below

        Enter TITLE : Programming_with_CPP


        Enter AUTHOR NAME  : Balguru_Samay


        Enter PUBLISHER : MC_GRAW_HILL


        Enter NUMBER OF COPIES AVAILABLE : 15


        Enter PRICE OF A SINGLE BOOK : 450


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 1


        Please enter book deatils as asked below

        Enter TITLE : Programming_with_java


        Enter AUTHOR NAME  : Balguru_Samay


        Enter PUBLISHER : MC_GRAW_HILL


        Enter NUMBER OF COPIES AVAILABLE : 15


        Enter PRICE OF A SINGLE BOOK : 550


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 1


        Please enter book deatils as asked below

        Enter TITLE : Baiscs_Of_C


        Enter AUTHOR NAME  : Yashwant_Kanetkar


        Enter PUBLISHER : Vision


        Enter NUMBER OF COPIES AVAILABLE : 25


        Enter PRICE OF A SINGLE BOOK : 600


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 1


        Please enter book deatils as asked below

        Enter TITLE : Let_us_C


        Enter AUTHOR NAME  : Yashawant_kanetkar


        Enter PUBLISHER : Pearson


        Enter NUMBER OF COPIES AVAILABLE : 20


        Enter PRICE OF A SINGLE BOOK : 500


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 1


        Please enter book deatils as asked below

        Enter TITLE : Modern_Digital_electronics


        Enter AUTHOR NAME  : RP_Jain


        Enter PUBLISHER : Vision


        Enter NUMBER OF COPIES AVAILABLE : 28


        Enter PRICE OF A SINGLE BOOK : 650


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 2


        Available books are as follows

        TITLE                 |  | AUTHOR            |   | PUBLISHER    |   |COPIES|  |PRICE

    Programming_with_CPP       |    | Balguru_Samay     |    | MC_GRAW_HILL |    | 15 |    | 450

    Programming_with_java      |    | Balguru_Samay     |    | MC_GRAW_HILL |    | 15 |    | 550

    Baiscs_Of_C                |    | Yashwant_Kanetkar |    | Vision       |    | 25 |    | 600

    Let_us_C                   |    | Yashawant_kanetkar|    | Pearson      |    | 20 |    | 500

    Modern_Digital_electronics |    | RP_Jain           |    | Vision       |    | 28 |    | 650


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 3
        Search for a book you want to buy

        Enter the name of a book : Programming_with_CPP


        Enter author name : Balguru_Samay


        Entered books is available to us and its details are as given below:
    TITLE               | | AUTHOR        |   | PUBLISHER    |   |COPIES|  |PRICE

    Programming_with_CPP |    | Balguru_Samay |    | MC_GRAW_HILL |    | 15 |     | 450


    Enter how many copies you want to buy : 5


        Entered number of copies are available to us

        Total price of book Programming_with_CPP with number of copies 5 is : 2250


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 3

        Search for a book you want to buy

        Enter the name of a book : Programming_with_CPP


        Enter author name : Balguru_Samay


        Entered books is available to us and its details are as given below:
    TITLE               | | AUTHOR        |   | PUBLISHER    |   |COPIES|  |PRICE

    Programming_with_CPP |    | Balguru_Samay |    | MC_GRAW_HILL |    | 15 |     | 450


        Enter how many copies you want to buy : 25

        Entered number of copies are not available to us

        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 3


        Search for a book you want to buy

        Enter the name of a book : Cpp_Baiscs


        Enter author name : Blaguru_Samay


        Entered name of book is not available to us


        **** MENU ****

    1]. Enter Details of Books
    2]. Display Available Books
    3]. Search for a Book
    4]. Exit

        Enter your choice  : 4

*/