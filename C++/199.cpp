#include <iostream>
using namespace std;

enum apple
{
    Jonathan,
    Golden_Del,
    Red_Del,
    Winesap,
    Cortland,
    McIntosh
};

// Array of strings that correspond to the apple enumeration.

char name[][20] = {
    "Jonathan",
    "Golden Delicious",
    "Red Delicious",
    "Winesap",
    "Cortland",
    "McIntosh"};
int main()
{
    apple fruit;
    fruit = Jonathan;
    cout << name[fruit] << '\n';
    fruit = Winesap;
    cout << name[fruit] << '\n';
    fruit = McIntosh;
    cout << name[fruit] << '\n';

    return 0;
}

/* Output:

Jonathan
Winesap
McIntosh

*/