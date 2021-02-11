//  Matrices maths

#include <iostream>

using namespace std;

int main()
{
    int a, a2, aa;
    int b, b2, bb;
    int c, c2, cc;
    int d, d2, dd;
    int lolo;
    {
        cout << " First number: Matrix 1(row1,col1):";
        cin >> a;
        cout << "Second number: Matrix 1(row1,col2):";
        cin >> b;
        cout << "Third number: Matrix 1(row2,col1):";
        cin >> c;
        cout << "Fourth number: Matrix 1(row2,col2):";
        cin >> d;
        cout << "First number: Matrix 2(row1,col1):";
        cin >> a2;
        cout << "Second number: Matrix 2 (row1,col2):";
        cin >> b2;
        cout << "Third number: Matrix 2 (row2,col1):";
        cin >> c2;
        cout << "Fourth number: Matrix 2 (row1,col1):";
        cin >> d2;
        cout << "ADD:ENTER 1; SUBTRACT:ENTER 2; MULTIPLY:ENTER 3;";
        cin >> lolo;
        switch (lolo)
        {
        case 1:
            aa = a + a2;
            bb = b + b2;
            cc = c + c2;
            dd = d + d2;
            cout << aa << "__" << bb << endl
                 << cc << "__" << dd;
            break;
        case 2:
            aa = a - a2;
            bb = b - b2;
            cc = c - c2;
            dd = d - d2;
            cout << aa << "__" << bb << endl
                 << cc << "__" << dd;
            break;
        case 3:
            aa = a * a2 + b * c2;
            bb = a * b2 + b * d2;
            cc = c * a2 + d * c2;
            dd = c * b2 + d * d2;
            cout << aa << "__" << bb << endl
                 << cc << "__" << dd;
            break;
        default:
            cout << "ERROR! PLEASE ENTER NUMBERS PROPERLY";
        }
    }
    return 0;
}