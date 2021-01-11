
// Class and Functions relations

/*
This program convert input string with number on the some base
to number with another base.
Input string should be in the format "XXXXX A B"
where XXXXX - your request number on the original
base A, and B is base for output.

2 - binary
...
8 - octal
9 - nine base system
10 - decimal
11 - 11th base
...
16 - hexadecimal

Examples:
1) for enter 101010 2 10 (originally binary base number)
You will get result: "Your output 10-base number is: 42".
2) for enter 12467 8 16 (originally octal base number)
You will get result: "Your output 16-base number is: 1537".
3) for enter F00F 16 10 (originally hexadecimal base number)
You will get result: "Your output 10-base number is: 61455".

Good luck!

*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Number
{
private:
    // Declaration
    int Base_Input, Base_Output;
    char data[30] = {};
    int QaunDigits;

public:
    void setData()
    {
        //cout<<"Enter your number (use 0,1,...,9,A,B,...,F): ";
        cin >> data;
        //cout<<"Enter input base (decimal number): ";
        cin >> Base_Input;
        //cout<<"Enter output base (decimal number): ";
        cin >> Base_Output;
        QaunDigits = strlen(data);
    }

    void showData()
    {
        cout << "Program stored " << get_Ibase();
        cout << "-base number: ";
        for (int j = 0; j < QaunDigits; j++)
            cout << data[j];
        cout << "\nNumber of digits: " << QaunDigits << endl;
    }

    char getData(int i) { return data[i]; }

    int getLen() { return QaunDigits; }

    int get_Ibase() { return Base_Input; }

    int get_Obase() { return Base_Output; }

    int get_dec(int a, int base, long long &num, Number *x)
    {
        int rase = 0, z = 0;
        if (base <= 10)
        { // For usage of non-symbolic base
            for (int i = a; i >= 0; i--)
            {
                rase = 1;
                for (int j = i; j < a; j++)
                {
                    rase *= base;
                }
                z = (int)(x->getData(i));
                num += (z - '0') * rase;
            }
        }
        else
        { // For usage of symbolic base
            rase = 0;
            z = 0;
            for (int i = a; i >= 0; i--)
            {
                rase = 1;
                for (int j = i; j < a; j++)
                {
                    rase *= base;
                }
                z = (int)(x->getData(i));
                //if (z==49) {num+=0; continue;}
                if (65 <= z && z <= 70)
                {
                    num += (z - 55) * rase;
                }
                if (48 <= z && z <= 57)
                {
                    num += (z - 48) * rase;
                }
            }
        }
    }

    int get_new_num(long long &k, int &p, int num_out[], int bout)
    {
        long long rase = 1;
        int c = 0;
        for (int i = 1; i <= p; i++)
            rase *= bout;
        if (p >= 1)
        {
            if ((k >= rase) && (k < rase * bout))
            {
                c = k / rase;
                num_out[p] = c;
                k -= c * rase;
                get_new_num(k, p, num_out, bout);
            }
            else
            {
                p--;
                get_new_num(k, p, num_out, bout);
            }
        }
        if (p == 0)
        {
            rase = 0;
            num_out[0] = k;
        }
    }
};

int main()
{
    // Declaration main variables and initialiaztion some of them
    int binp, bout, length = 0;
    long long num_in = 0;
    long long rase = 0;
    int digit_out = 0;
    int p;
    long long k;
    int z;

    //Part of program for input requested string
    Number *arrow;
    arrow = new Number;
    arrow->setData();

    //Part of program for interpretation length of number
    length = (arrow->getLen());

    //Part of program for interpretation input base
    binp = (arrow->get_Ibase());

    //Part of program for interpretation output base
    bout = (arrow->get_Obase());

    //Convertation input number to decimal base
    arrow->get_dec((length - 1), binp, num_in, arrow);

    // Calculation output digits and initialiaztion output array
    digit_out = log(num_in) / log(bout);
    int num_out[digit_out];
    for (int x = digit_out; x >= 0; x--)
    {
        num_out[x] = 0;
    }

    //Calling decimal to binary thru hex converter
    k = num_in;
    p = digit_out;
    arrow->get_new_num(k, p, num_out, bout);

    //Output result
    arrow->showData();

    cout << "Your output " << bout << "-base number is: ";
    for (int x = digit_out; x >= 0; x--)
    {
        if (num_out[x] <= 9)
            cout << num_out[x];
        if (num_out[x] > 9)
            cout << (char)(num_out[x] + 'A' - 10);
    }
}