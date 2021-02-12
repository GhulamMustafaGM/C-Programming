// function + while : bank system

#include <iostream>
using namespace std;
double bala = 10000.0;

void final(string n, double x, double y);
void curbala(double x);
double deposite(double x, double y);
double draw(double x, double y);

void curbala(double x)
{
    cout << "Your current Balance is :" << x << " "
         << "S.R" << endl;
}
void final(string n, double x, double y)
{
    cout << "Customer Name :" << n << endl;
    cout << "Your Balance was :" << x << " "
         << "S.R" << endl;
    cout << "Your new balance is: " << y << " "
         << "S.R" << endl;
}

double deposite(double x, double y)
{
    double newba;
    newba = x + y;
    return newba;
}

double draw(double x, double y)
{
    double newba;
    newba = x - y;
    return newba;
}

int main()
{
    double p, k, v;
    string n;
    char t;
    int f = 1;

    cout << ">> Pleas type your name:";
    cin >> n;

    curbala(bala);

    while (f > 0)
    {
        cout << ">>>>> Enter Your choice :" << endl;
        cout << "d- draw" << endl;
        cout << "p- deposite" << endl;
        cout << "e- to end" << endl;
        cin >> t;

        switch (t)
        {
        case 'P':
        case 'p':
        {
            cout << ">>>Please Enter Your Deposite Amount:" << endl;
            cin >> p;
            k = deposite(bala, p);
            final(n, bala, k);
            bala = k;
        }
        break;
        case 'D':
        case 'd':
        {
            cout << ">>>Please Enter Your Draw Amount:" << endl;
            cin >> p;
            v = draw(bala, p);
            final(n, bala, v);
            bala = v;
        }
        break;
        case 'e':
        case 'E':
            f = 0;
            break;
        default:
            cout << "Enter a valid letter" << endl;
        }
    }
}