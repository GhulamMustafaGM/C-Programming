// if else switch practive

#include <iostream>

using namespace std;

int main()
{
    char operandum, package;
    int num, package1, package2, package3, package4, package5, student, seniorcitizens, member, nonmember, total;
    string cust;

    cout << "Welcome to Biyaheng Langit Travel&Tours!" << endl;
    cout << "Please Enter your name: ";
    cin >> cust;

    cout << "Available Packages: (All package doesn't include the airfare)" << endl;
    cout << "[1] Trip to Batanes for 3D2N ------ 2000.00php / px" << endl;
    cout << "[2] Trip to Puerto Princesa 3D2N -- 2800.00php / px" << endl;
    cout << "[3] Trip to Palawan for 4D3N ------ 4000.00php / px" << endl;
    cout << "[4] Trip to Hong-Kong for 5D4N ---- 5000.00php / px" << endl;
    cout << "[5] Trip to Singapore for 5D4N ---- 5000.00php / px" << endl
         << endl;
    cout << "Please enter the letter of the chosen package: ";
    cin >> package;

    if (package == '1')
    {
        package1 = 2000.00;
        cout << cust << ". You chose Trip to Batanes for 3D2N for the price of " << package1 << "php / px." << endl
             << endl;

        cout << cust << ". Please specify yourself from the following for your discount: " << endl;
        cout << "[a] Student" << endl;
        cout << "[b] PWD/Senior Citizens" << endl;
        cout << "[c] Member" << endl;
        cout << "[d] Non-Member" << endl;
        cout << "Enter your choice: ";
        cin >> operandum;

        cout << "How many are you who will be travelling? ";
        cin >> num;

        switch (operandum)
        {

        case 'a':
            package1 = 2000.00 * num;
            student = package1 * 0.05;
            total = package1 - student;
            cout << "You have a discount of 5% ";
            cout << " Your Total expense is " << total << "php";
            break;

        case 'b':
            package1 = 2000.00 * num;
            seniorcitizens = package1 * 0.20;
            total = package1 - seniorcitizens;
            cout << "You have a discount of 20%. Your Total expense is " << total << "php";
            break;

        case 'c':
            package1 = 2000.00 * num;
            member = package1 * 0.25;
            total = package1 - member;
            cout << "You have a discount of 25%. Your Total expense is " << total << "php";
            break;

        case 'd':
            package1 = 2000.00 * num;
            total = package1;
            cout << "You have no discount. Your Total expense is " << total << "php";
            break;
        }
    }

    else if (package == '2')
    {
        package2 = 2800.00;
        cout << cust << ". You chose Trip to Puerto Princesa for 3D2N for the price of " << package2 << "php / px." << endl
             << endl;

        cout << cust << ". Please specify yourself from the following: " << endl;
        cout << "[a] Student" << endl;
        cout << "[b] PWD/Senior Citizens" << endl;
        cout << "[c] Member" << endl;
        cout << "[d] Non-Member" << endl;
        cout << "Enter your choice: ";
        cin >> operandum;

        cout << "How many are you who will be travelling? ";
        cin >> num;

        switch (operandum)
        {

        case 'a':
            package2 = 2800.00 * num;
            student = package2 * 0.05;
            total = package2 - student;
            cout << "You have a discount of 5%. Your Total expense is " << total << "php";
            break;

        case 'b':
            package2 = 2800.00 * num;
            seniorcitizens = package2 * 0.20;
            total = package2 - seniorcitizens;
            cout << "You have a discount of 20%. Your Total expense is " << total << "php";
            break;

        case 'c':
            package2 = 2800.00 * num;
            member = package2 * 0.25;
            total = package2 - member;
            cout << "You have a discount of 25%. Your Total expense is " << total << "php";
            break;

        case 'd':
            total = num * package2;
            cout << "You have no discount. Your Total expense is " << total << "php";
            break;
        }
    }

    else if (package == '3')
    {
        package3 = 4000.00;
        cout << cust << ". You chose Trip to Palawan for 4D3N for the price of " << package3 << " / px." << endl
             << endl;

        cout << cust << ". Please specify yourself from the following: " << endl;
        cout << "[a] Student" << endl;
        cout << "[b] PWD/Senior Citizens" << endl;
        cout << "[c] Member" << endl;
        cout << "[d] Non-Member" << endl;
        cout << "Enter your choice: ";
        cin >> operandum;

        cout << "How many are you who will be travelling? ";
        cin >> num;

        switch (operandum)
        {

        case 'a':
            package3 = 4000.00 * num;
            student = package3 * 0.05;
            total = student - package3;
            cout << "You have a discount of 5%. Your Total expense is " << total << "php";
            break;

        case 'b':
            package3 = 4000.00 * num;
            seniorcitizens = package3 * 0.20;
            total = package3 - seniorcitizens;
            cout << "You have a discount of 20%. Your Total expense is " << total << "php";
            break;

        case 'c':
            package3 = 4000.00 * num;
            member = package3 * 0.25;
            total = package3 - member;
            cout << "You have a discount of 25%. Your Total expense is " << total << "php";
            break;

        case 'd':
            total = num * package3;
            cout << "You have no discount. Your Total expense is " << total << "php";
            break;
        }
    }

    else if (package == '4')
    {
        package4 = 5000.00;
        cout << cust << ". You chose Trip to Hong-Kong 5D4N for the price of " << package4 << "php / px." << endl
             << endl;

        cout << cust << ". Please specify yourself from the following: " << endl;
        cout << "[a] Student" << endl;
        cout << "[b] PWD/Senior Citizens" << endl;
        cout << "[c] Member" << endl;
        cout << "[d] Non-Member" << endl;
        cout << "Enter your choice: ";
        cin >> operandum;

        cout << "How many are you who will be travelling? ";
        cin >> num;

        switch (operandum)
        {

        case 'a':
            package4 = 5000.00 * num;
            student = package4 * 0.05;
            total = package4 - student;
            cout << "You have a discount of 5%. Your Total expense is " << total << "php";
            break;

        case 'b':
            package4 = 5000.00 * num;
            seniorcitizens = package4 * 0.20;
            total = package4 - seniorcitizens;
            cout << "You have a discount of 20%. Your Total expense is " << total << "php";
            break;

        case 'c':
            package4 = 5000.00 * num;
            member = package4 * 0.25;
            total = package4 - member;
            cout << "You have a discount of 25%. Your Total expense is " << total << "php";
            break;

        case 'd':
            total = num * package4;
            cout << "You have no discount. Your Total expense is " << total << "php";
            break;
        }
    }

    else if (package == '5')
    {
        package5 = 5000.00;
        cout << cust << ". You chose Trip to Singapore 5D4N for the price of " << package5 << "php / px." << endl
             << endl;

        cout << cust << ". Please specify yourself from the following: " << endl;
        cout << "[a] Student" << endl;
        cout << "[b] PWD/Senior Citizens" << endl;
        cout << "[c] Member" << endl;
        cout << "[d] Non-Member" << endl;
        cout << "Enter your choice: ";
        cin >> operandum;

        cout << "How many are you who will be travelling? ";
        cin >> num;

        switch (operandum)
        {

        case 'a':
            package5 = 5000.00 * num;
            student = package5 * 0.05;
            total = package5 - student;
            cout << "You have a discount of 5%. Your Total expense is " << total << "php";
            break;

        case 'b':
            package5 = 5000.00 * num;
            seniorcitizens = package5 * 0.20;
            total = package5 - seniorcitizens;
            cout << "You have a discount of 20%. Your Total expense is " << total << "php";
            break;

        case 'c':
            package5 = 5000.00 * num;
            member = package5 * 0.25;
            total = package5 - member;
            cout << "You have a discount of 25%. Your Total expense is " << total << "php";
            break;

        case 'd':
            total = num * package5;
            cout << "You have no discount. Your Total expense is " << total << "php";
            break;
        }
    }

    else
    {
        cout << cust << ". Option invalid. Please review the choices above.";
    }

    return 0;
}
