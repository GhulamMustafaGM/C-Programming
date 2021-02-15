// Enum example

#include <iostream>
using namespace std;

int main()
{
    // define Months as having 12 possible vlaues
    enum months
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Mul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };

    // define bestmonth as a variable ytype months

    months bestmonth;

    // assign bestm

    bestmonth = Jan;

    // now we can check the value of bestMonths just
    // like any othe rvariable

    if (bestmonth == Jan)
    {
        cout << "I'm not so sure January is the best month\n";
    }
}