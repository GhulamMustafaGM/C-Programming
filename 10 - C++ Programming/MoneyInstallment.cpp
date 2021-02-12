// equal money installment

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /*    Input manner:-
for example, i took this input ↓

12,000             // Monthly installment by the bank (1st input)
5                  // terms in years (2nd input)
90,000             // final amount (3rd input)    */
    long ins, fin, subm, rem;
    int term;
    cin >> ins;
    cin >> term;
    cin >> fin;
    subm = ins * (term * 12);
    rem = fin - subm;
    cout << "Monthly installment by the bank = " << ins << "\nTerms = " << term << "\nFinal amount to be collected by the bank = " << fin << "\n\nThe monthly installment, after " << term << " year(s), will become " << subm;
    if (rem > 0)
    {
        cout << "\n\n"
             << rem << " is the amount pending, which is needed to be collected more further.";
    }
    if (subm == fin)
    {
        cout << "\n\n*** Amount submition completed *** (" << subm << ")";
    }
    if (subm > fin)
    {
        cout << "\n\nLimit reached!(" << subm << ")\nStop submition.";
    }
}
