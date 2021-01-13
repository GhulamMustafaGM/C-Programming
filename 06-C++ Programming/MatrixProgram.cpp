// Magnetic numbers

/*

Description: Given a matrix the code finds whether the numbers in row and
column repel (<>) or attract (><) 
each other.

Note: If the number is even its a positive pole(+). If the is number is odd is a negitive pole(-).

Input: Enter rows and columns separated by space or line.
*/

#include <iostream>
#include <valarray>
#include <ctime>
#include <random>
#include <algorithm>
#include <sstream>

using namespace std;
using VA = valarray<int>;

// Process element at row and row and below it

auto Prow = [](int s, int r, stringstream &t1, stringstream &t2) {
    if (s & 1 && r & 1 ||
        (!(r & 1) && !(s & 1)))
    {
        t1 << "^"
           << "    ";
        t2 << "v"
           << "    ";
    }
    else
    {
        t1 << "v"
           << "    ";
        t2 << "^"
           << "    ";
    }
};

int main()
{
    int row, col;
    cin >> row >> col;
    VA mag(row * col);

    std::srand(std::time(nullptr));
    // Fill the matrix with random values
    std::generate(std::begin(mag),
                  std::end(mag), [] { return rand() % 9; });

    for (int rw = 0; rw < row; ++rw)
    {
        // Two rows at a time
        VA r = mag[std::slice(rw * col, col, 1)];
        VA s = mag[std::slice((rw + 1) * col, col, 1)];

        // For //"v","^" symbols
        stringstream t1(""), t2("");
        for (int i = 0; i < col - 1; ++i)
        {
            if (r[i] & 1 && r[i + 1] & 1 ||
                (!(r[i] & 1) && !(r[i + 1] & 1)))
                cout << r[i] << " <> ";
            else
                cout << r[i] << " >< ";

            Prow(r[i], s[i], t1, t2);
        } // end for(int i=0; i<col; ++i)
        cout << r[col - 1];
        // Process last col of both rows
        Prow(s[col - 1], r[col - 1], t1, t2);

        cout << "\n";
        if (rw != row - 1)
            cout << t1.str() << "\n"
                 << t2.str()
                 << "\n";
    } // end for(int rw=0; rw<row; ++rw)
    return 0;
} // end main