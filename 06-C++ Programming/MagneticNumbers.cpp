// magnetic Numbers

#include <iostream>
#include <valarray>
#include <ctime>
#include <random>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;
using VA = valarray<int>;

auto Balance = [](int u, int v) {
    int sum{};
    while (u > 0 && v > 0)
    {
        int ru = u % 10;
        int rv = v % 10;
        // add 1 if replusive (both
        // digits odd or even. Subtract 1
        // if attractive
        sum += ((ru & 1 && rv & 1) || (!(ru & 1) && !(rv & 1))) ? 1 : -1;

        u /= 10;
        v /= 10;
    } //end while(u>0 && v>0)
    return sum;
}; // end Balance

// process elements of adjacent
// columns
auto Pcol = [](int u, int v) {
    cout << u;

    int sum = Balance(u, v);
    // sum > 0, is repulsive("<>")
    // sum < 0, is attractive("><")
    // sum = 0, is balanced("~~")
    cout << (sum > 0 ? " <> " : sum < 0 ? " >< " : " ~~ ");
}; //end Pcol

// process element at row and row
// below it
auto Prow = [](int u, int v, stringstream &t1, stringstream &t2) {
    int sum = Balance(u, v);

    // getting the length just for
    // formatting the output. Should i
    // pass it instead?
    int len = floor(log10(u)) + 1;
    int f = len & 1 ? 3 : 4;
    len = len & 1 ? len + 1 : len;

    // sum > 0, is repulsive("^","v")
    // sum < 0, is attractive("v","^")
    // sum = 0, is balanced("~","~")
    sum > 0 ? ((t1 << setw(len / 2) << right
                   << "^" << setw(len / 2 + f)
                   << " "),
               (t2 << setw(len / 2) << right
                   << "v" << setw(len / 2 + f)
                   << " "))
            :

            sum < 0 ? ((t1 << setw(len / 2) << right
                           << "v" << setw(len / 2 + f)
                           << " "),
                       (t2 << setw(len / 2) << right
                           << "^" << setw(len / 2 + f)
                           << " "))
                    :

                    ((t1 << setw(len / 2) << right
                         << "~" << setw(len / 2 + f)
                         << " "),
                     (t2 << setw(len / 2) << right
                         << "~" << setw(len / 2 + f)
                         << " "));
}; // end Prow

int main()
{
    int row, col, digits;
    cin >> row >> col >> digits;
    VA mag(row * col);

    std::srand(std::time(nullptr));
    // fill the matrix with random values
    // of length equal digits
    int rmin = pow(10, digits - 1);
    int rmax = pow(10, digits);

    std::generate(std::begin(mag),
                  std::end(mag), [=] {
 int rnum{};
 // get the random number till it is
 // not of the correct length
 return rmin+(rand()%(rmax-rmin)); });

    // start processing
    for (int rw = 0; rw < row; ++rw)
    {
        // two rows at a time
        VA r = mag[std::slice(rw * col, col, 1)];
        VA s = mag[std::slice((rw + 1) * col, col, 1)];

        // for //"v","^" symbols
        stringstream t1(""), t2("");
        for (int i = 0; i < col - 1; ++i)
        {
            Pcol(r[i], r[i + 1]);
            Prow(r[i], s[i], t1, t2);
        } //end for(int i=0; i<col; ++i)
        cout << r[col - 1];
        // process last col of both rows
        Prow(s[col - 1], r[col - 1], t1, t2);

        cout << "\n";
        if (rw != row - 1)
            cout << t1.str() << "\n"
                 << t2.str()
                 << "\n";
    } // end for(int rw=0; rw<row; ++rw)
    return 0;
} // end main