// Processing String Program

/* 

Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.

Description: The code extracts digits from alphanumeric string and finds their sum. If string doesn't contain any digit the sum will be 0.

Example

Input: 1 ab1231da
Output: 7

Explanation

The digits in this string are 1, 2, 3 and 1. Hence, the sum of all of them is 7.*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int a(0);
    string w;
    cin >> w;

    for (int i(0); i < w.size(); i++)
    {
        a += (isdigit(w[i]) ? w[i] : '0') - 48;
    }
    cout << a << endl;

    return 0;
}
//Nice Challenge

/* output

3 99a3;;a
3

*/
