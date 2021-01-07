// Convert foreign currency

#include <iostream>
#include <iomanip>
using namespace std;

// This program will input South African Rand money and convert it to foreign currency

const double EUROEXCHANGE = 0.6730;
const double DOLLAREXCHANGE = 0.083;
const double POUNDEXCHANGE = 0.0583;

// This function takes dollar value and converts to euros
void convertMulti(float rands, float &euros, float &dollars)
{
    euros = rands * EUROEXCHANGE;
    dollars = rands * DOLLAREXCHANGE;
}

// This function takes dollar value and converts to euros dollars and pounds
void convertMulti(float rands, float &euros, float &dollars, float &pounds)
{
    euros = rands * EUROEXCHANGE;
    dollars = rands * DOLLAREXCHANGE;
    pounds = rands * POUNDEXCHANGE;
}

// This function takes dollar value and converts to pounds
float convertToPounds(float rands)
{
    return rands * POUNDEXCHANGE;
}

//This function takes dollar value and converts to pounds
float convertToEuros(float rands)
{
    return rands * EUROEXCHANGE;
}

//This function takes dollar value and converts to dollars
float convertToDollars(float rands)
{
    return rands * DOLLAREXCHANGE;
}

int main()
{
    float rands;
    float dollars;
    float pounds;
    float euros;

    cout << fixed << showpoint << setprecision(2);
    cout << "Please input the SA Rand amount you want to convert: "
         << endl;
    cout << "to euros and dollars" << endl;
    cin >> rands;

    convertMulti(rands, dollars, pounds);
    cout << "R" << rands << " is converted to " << euros
         << " euros and " << dollars << " dollars." << endl
         << endl;
    cout << "Please input the SA Rand amount you want to convert \n";
    cout << "to euros, dollars and pounds" << endl;
    cin >> rands;

    convertMulti(rands, euros, dollars, pounds);
    cout << "R" << rands << " is converted to " << euros
         << " euros and " << dollars << " dollars and "
         << pounds << " pounds" << endl;

    cout << "Please input the SA Rand amount you want to convert \n";
    cout << "to pounds" << endl;
    cin >> rands;

    pounds = convertToPounds(rands);
    cout << "R" << rands << " is converted to " << pounds
         << " pounds " << endl
         << endl;

    cout << "Please input the SA Rand amount you want to convert \n";
    cout << "to euros" << endl;
    cin >> rands;

    convertToEuros(euros);
    cout << "R" << rands << " is converted to " << euros << " euros "
         << endl
         << endl;

    cout << "Please input the SA Rand amount you want to convert \n";
    cout << "to dollars " << endl;
    cin >> rands;

    dollars = convertToDollars(rands);
    cout << "R" << rands << " is converted to $" << dollars
         << " dollars\n";

    return 0;
}