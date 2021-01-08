// Find spy number (STL)

/* 

Description: The code finds whether given number is a spy number or not.

A number is a spy number if the sum of it's digits equals to product of it's digits.
e.g 1124 is a spy number since
1+1+2+4 = 8 and
1*1*2*4 = 8

Input: Enter an input number and press submit
*/

#include <iostream>
#include <numeric>
#include <vector>
#include <functional>

int main()
{
    using namespace std;

    // input number
    int num;
    cin >> num;
    // stores the separated digits
    vector<int> ndigits;
    cout << num;

    // could have calculated sum and
    // product at the time of spliting
    // the digits but didn't want to do it
    while (num > 0)
    {
        ndigits.emplace_back(num % 10);
        num /= 10;
    }

    cout << " is spy number? : " << boolalpha <<
        // accumulate is an STL algorithm that
        // works like a Left-Fold expression on
        // an input sequence applying a
        // specified function on each element
        // to produce a result.
        // Left-Fold means given a sequence
        // a1,a2,a3,a4,a5 etc. a starting value
        // x and an operation op to apply, the
        // sequence is processed as follows
        // (((x op a1) op a2) op a3) etc.
        // Here the sequence is the separated
        // digits, to which i have applied
        // operation plus<int> i.e add each
        // element with a starting sum 0
        // I have then applied operation
        // multiplies<int> i.e multiply each
        // element with a starting value 1
        (accumulate(ndigits.begin(), ndigits.end(), 0, plus<int>()) ==
         accumulate(ndigits.begin(), ndigits.end(), 1, multiplies<int>()));
    return 0;
}

