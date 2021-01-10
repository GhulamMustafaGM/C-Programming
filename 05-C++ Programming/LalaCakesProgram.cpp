#include <iostream>
#include <string>
#include <windows.h> //i added this because i wanna add a time limit for some cout statements
#include <iomanip>   // used because floating points are'nt showing decimal points in cout
using namespace std;

void welcome();                                                                             // welcome block ( for read easily )
char orderList();                                                                           // Select Orders via Console
int calculateItems(char itenName[][15], float itemPrize[10], string amount, string number); // mathematical Operations regarding customer bill
void billingWelcome();                                                                      // welcome block ( for read easily )
void orderItemsHBlock();                                                                    //header block in order area
void quit();                                                                                //quit message ( for easy reading perpose )

int main()
{
    string uid, pwd; // declare username and password ( assign via user )

    int attempt = 0;

    cout << fixed << setprecision(2); // got 'setprecision' from the <iomanip> header and 'fixed' to keep the decimal.
    welcome();
    char regName[3][20] = {"Deshan Cooray", "Bill Gates", "Mia Khalifa"}; // Account Names of users (optional)
    char regNumber[3][20] = {
        "user1",
        "user2",
        "user3",
    }; //user logins of users
    char accPassword[3][20] = {
        "user1",
        "user2",
        "user3",
    }; //passwords of users

    while (attempt < 3)
    {
        cout << "		  *****You Must Login First ******" << endl
             << endl;
        cout << "		   Enter Your Username : ";
        cin >> uid;
        cout << "		   Enter Your password : ";
        cin >> pwd;
        if (uid == regNumber[0] && pwd == accPassword[0])
        {
            cout << endl
                 << "		          ->> Welcome <<-" << endl;
            cout << "		 You are logged in as : " << regName[0] << endl
                 << endl;
            cout << "   You will be redirected to the Order Area within few seconds..." << endl
                 << endl;
            cout << "		      |";
            for (int a = 0; a < 10; ++a)
            { // this loop for loading bar when login success
                cout << "=>";
                Sleep(700); // set time for cout statement execution ( using <windows.h> )
            }
            cout << " 100% " << endl;
            Sleep(1000);
            orderList(); // call list or orders function
            break;
        }
        else if (uid == regNumber[1] && pwd == accPassword[1])
        {
            cout << endl
                 << "		          ->> Welcome <<-" << endl;
            cout << "		 You are logged in as : " << regName[1] << endl
                 << endl;
            cout << "   You will be redirected to the Order Area within few seconds..." << endl
                 << endl;
            cout << "		      |";
            for (int a = 0; a < 10; ++a)
            { // this loop for loading bar when login success
                cout << "=>";
                Sleep(700);
            }
            cout << " 100% " << endl;
            Sleep(1000); // set time for cout statement execution ( using <windows.h> )
            orderList();
            break;
        }
        else if (uid == regNumber[2] && pwd == accPassword[2])
        {
            cout << endl
                 << "		          ->> Welcome <<-" << endl;
            cout << "		 You are logged in as : " << regName[2] << endl
                 << endl;
            cout << "   You will be redirected to the Order Area within few seconds..." << endl
                 << endl;
            cout << "		      |";
            for (int a = 0; a < 10; ++a)
            { // this loop for loading bar when login success
                cout << "=>";
                Sleep(700);
            }
            cout << " 100% " << endl; // end of loading bar
            Sleep(1000);              // frees 1 sec
            orderList();
            break;
        }
        else
        {
            cout << "Invalid Username or Password.." << endl;
            cout << "Please Try again" << endl;
            Sleep(2000);
            system("cls");
            welcome();
            cout << "		 Login Attempt  : " << attempt << " Max Attempts : 3" << endl;
            attempt++;
        }
    }
    if (attempt == 3)
    {
        cout << "Too many login attempts! The program will now terminate." << endl;
        return 0;
    }

    return 0;
}

char orderList()
{
    system("color 0A");

    char itemID[10][20] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    char itemName[10][15] = {"Cakes", "Cookies", "Breads", "Vine", "Beer", "Coffee", "Cheeese Cake", "Custard", "Apple Pie", "Triffle"};
    float itemPrize[10] = {55.00, 20.00, 55.00, 65.00, 65.00, 45.00, 85.00, 89.00, 99.00, 110.00};

    string number;
    string amount;
    string continueSwitch;

    system("cls");
    orderItemsHBlock(); //show header
    cout << "                                                                 " << endl;
    cout << "Item              Number     Name                    Price		  " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Bakery Items :     " << itemID[0] << "		" << itemName[0] << "                Rs. " << itemPrize[0] << "	  " << endl;
    cout << "                   " << itemID[1] << "		" << itemName[1] << "              Rs. " << itemPrize[1] << "	  " << endl;
    cout << "                   " << itemID[2] << "		" << itemName[2] << "               Rs. " << itemPrize[2] << "	  " << endl;
    cout << "Beverages    :     " << itemID[3] << "		" << itemName[3] << "                 Rs. " << itemPrize[3] << "	  " << endl;
    cout << "                   " << itemID[4] << "		" << itemName[4] << "                 Rs. " << itemPrize[4] << "	  " << endl;
    cout << "                   " << itemID[5] << "		" << itemName[5] << "               Rs. " << itemPrize[5] << "	  " << endl;
    cout << "Desserts     :     " << itemID[6] << "		" << itemName[6] << "         Rs. " << itemPrize[6] << "	  " << endl;
    cout << "                   " << itemID[7] << "		" << itemName[7] << "              Rs. " << itemPrize[7] << "	  " << endl;
    cout << "                   " << itemID[8] << "		" << itemName[8] << "            Rs. " << itemPrize[8] << "	  " << endl;
    cout << "                   " << itemID[9] << "		" << itemName[9] << "             Rs. " << itemPrize[9] << "	  " << endl;
    cout << "_________________________________________________________________" << endl;

    cout << endl
         << "* First select your order number and type it, then enter it" << endl;
    cout << "* After that select how much u want to order" << endl
         << endl;
    cout << "			Enter Your Order : ";
    cin >> number;
    if ((number == "0") || (number == "1") || (number == "2") || (number == "3") || (number == "4") || (number == "5") || (number == "6") || (number == "7") || (number == "8") || (number == "9"))
    {
        cout << "			Enter Ammount : ";
        cin >> amount;
        if ((amount == "1") || (amount == "2") || (amount == "3") || (amount == "4") || (amount == "5") || (amount == "6") || (amount == "7") || (amount == "8") || (amount == "9") || (amount == "10"))
        {
            cout << "\nPlease Wait...." << endl;
            cout << "Items Selected.. Continue? (Y/N) : ";
            cin >> continueSwitch;
            if ((continueSwitch == "Y") || (continueSwitch == "y"))
            {
                calculateItems(itemName, itemPrize, amount, number); //parsing data to the calculate function
            }
            else if ((continueSwitch == "N") || (continueSwitch == "n"))
            {
                string exit;
                cout << "Exit from portal ? (Y/N) : ";
                cin >> exit;
                if ((exit == "Y") || (exit == "y"))
                {
                    system("cls");
                    quit();
                    return 0;
                }
                else if ((exit == "N") || (exit == "n"))
                {
                    cout << "You will be returned to the order area.." << endl;
                    Sleep(3000);
                    orderList();
                }
                else
                {
                    cout << "Choose Correct Options .." << endl;
                    Sleep(2000);
                    system("cls");
                    orderList();
                }
            }
            else
            {
                system("color 0C");
                cout << "Wrong Selection... " << endl
                     << "Please Try Again With Correct Values.." << endl;
                Sleep(2000);
                system("cls");
                orderList();
            }
        }
        else
        {
            system("color 0C");
            cout << "Wrong input!" << endl
                 << "* Only you can order 10 items per once" << endl;
            Sleep(2000);
            system("cls");
            orderList();
        }
    }
    else
    {
        system("color 0C");
        cout << "Wrong Selection... \nPlease Try Again With Correct Values.." << endl;
        Sleep(3000);
        system("cls");
        orderList();
    }
}

int calculateItems(char itemName[][15], float itemPrize[10], string amount, string number)
{

    int int_number = stoi(number); // Convert String to Integer
    int int_amount = stoi(amount); // Convert String to Integer
    cout << number << endl;
    float sum = itemPrize[int_number] * int_amount;
    string billOption;

    system("cls");
    billingWelcome();
    cout << "\n\n\n\n"
         << endl;
    cout << " Calculating Items 0 |";
    for (int a = 0; a < 40; ++a)
    { //calculating items progress bar
        cout << "#";
        Sleep(100);
    }
    cout << "| 100%" << endl
         << endl; // end of calculate progress bar
    Sleep(1500);  //freese 1.5 sec
    system("cls");
calcitems: //get return from goto option, if fails to choose correct option in bill
    system("color 0A");
    billingWelcome(); //show billing area header
    cout << endl;
    cout << "Amount			Selected Item			 Price" << endl
         << endl;
    //cout << "____________________________________________________________________" << endl;
    cout << amount << "			" << itemName[int_number] << "				Rs." << itemPrize[int_number] << endl
         << endl
         << endl;
    cout << endl
         << "Total Due						Rs." << sum << endl;
    cout << "____________________________________________________________________" << endl
         << endl;
    cout << "* Enter 1 to continue.." << endl;
    cout << "* Enter 2 to Return to Order Interface.." << endl;
    cout << "* Enter 3 to quit.." << endl;
    cout << "					Select Option : ";
    cin >> billOption; //input option select
    if (billOption == "1")
    {
        system("cls");
        system("color 0B");
        billingWelcome(); //show billing area header
        cout << endl;
        cout << "		* Thank You for using our services" << endl;
        cout << "		* Your Order will be available soon" << endl;
        cout << "		* LALA-CAKES Sri Lanka	 Reg.No : DF87C6-*CG" << endl;
        cout << "____________________________________________________________________" << endl
             << endl;
        return 0;
    }
    else if (billOption == "2")
    {
        orderList();
    }
    else if (billOption == "3")
    {
        system("cls");
        system("color 0E");
        quit(); //show quit message
        return 0;
    }
    else
    {
        system("color 0C");
        cout << "Wrong Choice... Please Try again!" << endl;
        cout << "Just a moment .....";
        Sleep(3000);
        system("cls");
        goto calcitems;
    }

    return 0;
}

void welcome()
{
    system("color 0A");
    cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
    cout << "|                                                                   |" << endl;
    cout << "|             Welcome to the LALA CAKES ORDERING INTERFACE          |" << endl;
    cout << "|              discover your favorite foods and bevarages           |" << endl;
    cout << "|                                                                   |" << endl;
    cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
}

void billingWelcome()
{
    cout << "********************************************************************" << endl;
    cout << "                                                                   " << endl;
    cout << "         Order Confirmation to Selected Items - LALA Cakes         " << endl;
    cout << "                **** LALA CAKES BILLING SYSTEM ****                " << endl;
    cout << "                                                                   " << endl;
    cout << "********************************************************************" << endl;
}

void orderItemsHBlock()
{
    cout << "+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=++=+=+=+=+=+=+=" << endl;
    cout << "           Welcome to LALA Cakes Ordering Interface	          " << endl;
    cout << "                    Please Place Your Order                      " << endl;
    cout << "+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=++=+=+=+=+=+=+=" << endl;
}

void quit()
{
    cout << "********************************************************************" << endl;
    cout << "                                                                   " << endl;
    cout << "                   LALA - CAKES ORDERING INTERFACE                 " << endl;
    cout << "                                                                   " << endl;
    cout << "********************************************************************" << endl;
    cout << endl
         << endl;
    cout << "			* Thank You for using our services						" << endl;
    cout << "			* Good Bye..!											" << endl;
    cout << "____________________________________________________________________" << endl
         << endl;
    cout << endl
         << endl;
}