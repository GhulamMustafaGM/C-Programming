// Calculation Amount

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int random_amount;
    int lowest = 50, highest = 5000;
    int range = (highest - lowest) + 1;
    random_amount = lowest + int(range * rand() / (RAND_MAX + 1.0)); //Calculating random amount

    cout << "------------------------\n";
    cout << "Amount=" << random_amount << "\n";
    cout << "------------------------\n";
    int N500, N100, N50, N10, N20, N5, N1;
    int amount = random_amount;
    N500 = N100 = N50 = N20 = N10 = N5 = N1 = 0;
    if (amount >= 500)
    {
        N500 = amount / 500; //Calculating notes of 500
        amount = amount % 500;
    }
    if (amount >= 100)
    {
        N100 = amount / 100; //Calculating notes of 100
        amount = amount % 100;
    }
    if (amount >= 50)
    {
        N50 = amount / 50; //Calculating notes of 50
        amount = amount % 50;
    }
    if (amount >= 20)
    {
        N20 = amount / 20; //Calculating notes of 20
        amount = amount % 20;
    }
    if (amount >= 10)
    {
        N10 = amount / 10; //Calculating notes of 10
        amount = amount % 10;
    }
    if (amount >= 5)
    {
        N5 = amount / 5; //Calculating notes of 5
        amount = amount % 5;
    }
    if (amount >= 1) //Calculating notes of 1
    {
        N1 = amount;
    }
    cout << "Total number of notes=\t" << N500 + N100 + N50 + N20 + N10 + N5 + N1 << "\n";

    cout << "Notes of 500=\t" << N500 << "\n";

    cout << "Notes of 100=\t" << N100 << "\n";

    cout << "Notes of 50=\t" << N50 << "\n";

    cout << "Notes of 20=\t" << N20 << "\n";

    cout << "Notes of 10=\t" << N10 << "\n";

    cout << "Notes of 5=\t" << N5 << "\n";

    cout << "Notes of 1=\t" << N1 << "\n";

    cout << "-------------------------";
    return 0;
}