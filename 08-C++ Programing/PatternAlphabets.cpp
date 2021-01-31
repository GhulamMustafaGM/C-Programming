// Pattern alphabets

#include <iostream>

using namespace std;
void amount(float princ, int t = 2, float rate = .08)
{

    cout << " principal amount :" << princ;
    cout << endl;
    cout << "time :" << t << " years";
    cout << endl;
    cout << "rate:" << rate;
    cout << endl;
    cout << "interest amount: " << (princ * t * rate);
    cout << endl;
}
int main()
{

    cout << " case 1";
    cout << endl;
    amount(2000);
    cout << endl;
    cout << "case 2 ";
    amount(2300, 3);
    cout << "case 3";
    amount(2300, 3, 0.11);
    cout << "case 4";
    amount(2500, 0.12);

    return 0;
}