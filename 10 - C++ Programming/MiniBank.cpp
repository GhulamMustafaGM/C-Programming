// Mini bank

#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;
string newCardNumber;
string CardNumber = "4056-4372-8846-5463";
double balance = 493.003;
class BankAccount
{
public:
    void sayHi()
    {
        cout << "Hi" << endl;
    }
};
void proov(string x)
{
    if (x == "balance")
    {
        cout << balance << '$' << endl;
        cout << "add number" << endl;
        cout << 1 << ":balance" << endl;
        cout << 2 << ":your card ID" << endl;
        cout << 3 << ":select card number" << endl;
    }
    else
    {
        cout << "error " << endl;
        cout << "add number" << endl;
        cout << 1 << ":balance" << endl;
        cout << 2 << ":your card ID" << endl;
        cout << 3 << ":select card number" << endl;
    }
}
void select(int v)
{
    if (v == 1)
    {
        cout << balance << "$" << endl
             << "Ok";
    }
    if (v == 2)
    {
        cout << CardNumber << " " << endl
             << "Ok";
    }
    if (v == 3)
    {
        cin >> newCardNumber;
        cout << "Ok";
    }
}
int main()
{
    BankAccount test;
    test.sayHi();
    string a;
    cin >> a;
    proov(a);
    int q;
    cin >> q;
    select(q);
}
