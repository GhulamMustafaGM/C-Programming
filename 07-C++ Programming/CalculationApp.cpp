#include <iostream>
using namespace std;

int main()
{
    double heightofTree;
    double upDistance;
    double downDistance;
    double distance = 0;
    double dayCounter = 0;

    cin >> heightofTree >> upDistance >> downDistance;

    cout << "INPUT" << endl;
    cout << "heightofTree:" << heightofTree << endl;
    cout << "upDistance:" << upDistance << endl;
    cout << "downDistance:" << downDistance << endl;
    cout << endl;

    while (distance <= heightofTree)
    {

        distance = distance + upDistance;
        dayCounter = dayCounter + 0.5;
        if (distance == heightofTree)
        {
            break;
        }

        distance = distance - downDistance;
        dayCounter = dayCounter + 0.5;
    }

    cout << "OUTPUT" << endl;
    cout << "Required days:" << dayCounter;

    return 0;
}