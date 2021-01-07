// Decimal to binary form

#include <iostream>
using namespace std;

void binary(int num)
{
    int rem;

    // Binary Number is either 0 ,either 1
    // It is a type of language understood by the computer

    if (num <= 1)
    {
        cout << num;

        // SAMPLE INPUT: 5
        return;
        // 6 of 30 daily codes
    }
    rem = num % 2;
    binary(num / 2);
    cout << rem;
}

int main()
{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;

    if (dec <= 0)
        cout << dec << " is not a positive integer." << endl;
    else
    // THIS CODE WAS EDITED ,THAT'S WHY IT WILL BE VISIBL ON 16 APRIL
    {
        cout << "The binary form of " << dec << " is ";
        cout << binary(dec) << " " << endl;

        // Thanx for reading this,beautiful :)
    }

    cout << "This is 6th of 30 daily codes. \n You can suggest me projects or suggestions in the comment box,that would be helpful .... \n  Hope you like it! \n Anmol \n 16th April,2018 \n";
    return 0;
}
