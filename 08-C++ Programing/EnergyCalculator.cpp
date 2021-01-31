// Energy Calcualtor 

#include <iostream>
using namespace std;
int main()
{
    int m, h;
    float energy;
    cout << " Please enter the mass of the object:\n ";
    cin >> m;
    cout << m;
    cout << " Kilograms";
    cout << " \nPlease enter the height of the object from the earth's surface:\n ";
    cin >> h;
    cout << h;
    cout << " metres";
    cout << "\nGiven earth's gravitational constant ";
    cout << "\ng=9.8N/kg ";
    energy = m * h * 9.8;
    cout << "\n\nPotential Energy of object is:\n\n " << energy << "Joules" << endl;
    cout << "\n\n\nRemember to like this code please";

    return 0;
}