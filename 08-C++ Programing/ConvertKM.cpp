// Convert km/h 1n m/s

#include <iostream>
using namespace std;

int main()
{

    double valueInKm;
    double valueInMs;

    cin >> valueInKm;

    valueInMs = valueInKm * 1000 / 3600;

    cout << valueInKm << " Km/h make " << valueInMs << " m/s.";

    return 0;
}