#include <iostream>
using namespace std;

int main()

{
    int balance;
    int *balptr;
    int value;

    balance = 3200;
    balptr = &balance;
    value = *balptr;
    cout << "balance is: " << value << endl;

    return 0;
}

/* 

balance is: 3200

*/