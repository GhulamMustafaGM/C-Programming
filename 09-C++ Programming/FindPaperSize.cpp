// Find paper size

/*

Enter N to get dimensions of paper A(N)

Example :
n = 4
get dimensions of paper A4
*/

#include <iostream>
using namespace std;

struct Paper
{
    int length, breadth, size;
    Paper(int l, int b, int s)
    {
        length = l;
        breadth = b;
        size = s;
    }
};

const Paper A0(1189, 841, 0);
const int L = 0;
const int B = 1;

int getLargestSide(Paper AN)
{
    return (AN.length > AN.breadth ? L : B);
}

Paper dimOfPaperOfSizeN(int n)
{
    if (n <= 0)
        return A0;
    Paper AN = dimOfPaperOfSizeN(n - 1);
    int side = getLargestSide(AN);
    int tlength, tbreadth, tsize;
    tsize = n;
    if (side == L)
    {
        tlength = AN.length / 2;
        tbreadth = AN.breadth;
    }
    else
    {
        tlength = AN.length;
        tbreadth = AN.breadth / 2;
    }
    Paper temp(tlength, tbreadth, tsize);
    return temp;
}

void printPaperDim(Paper A)
{
    cout << "Paper A" << A.size << endl;
    cout << "Length (mm) = " << A.length << endl;
    cout << "Breadth (mm) = " << A.breadth;
}

int main()
{
    int n;
    cin >> n;
    printPaperDim(dimOfPaperOfSizeN(n));
    return 0;
}