// Parking meter app

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float calculateCharges(float hrs)
{

    float totCharge = 12.0;

    if (hrs > 3)
    {
        totCharge += (ceil(hrs) - 3) + 0.9;
    }
    if (totCharge > 20.00)
    {
        totCharge = 20.00;
    }
    return totCharge;
}

void printReport(float Car1, float Car2, float Car3)
{
    float Car1Charges = calculateCharges(Car1);
    float Car2Charges = calculateCharges(Car2);
    float Car3Charges = calculateCharges(Car3);

    cout << fixed
         << setprecision(2)
         << setfill('0');

    cout << "Car"
         << "\t"
         << "Hours"
         << "\t"
         << "Charge" << endl
         << "1\t" << Car1 << "\t" << Car1Charges << endl
         << "2\t" << Car2 << "\t" << Car2Charges << endl
         << "3\t" << Car3 << "\t" << Car3Charges << endl
         << "TOTAL\t" << Car1 + Car2 + Car3 << "\t"
         << "R"
         << Car1Charges + Car2Charges + Car3Charges << endl;
}
int main()
{
    float Car1, Car2, Car3;

    cout << "PARKINGMETER CALCULATOR" << endl
         << "-------------" << endl
         << "Car #1:\t";

    cin >> Car1;
    cout << "Car #2:\t";
    cin >> Car2;
    cout << "Car #3:\t";
    cin >> Car3;

    printReport(Car1, Car2, Car3);
    return 0;
}