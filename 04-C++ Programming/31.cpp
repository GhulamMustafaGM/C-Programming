// Code to sum all elements array

#include <iostream>
using namespace std;

int main()
{

    int tuna[5] = {1, 2, 3, 4, 5};
    // Declare tuna with 5 elements
    int sum = 0;
    // Declare sum as integer

    for (int x = 0; x < 5; x++)
    {
        sum += tuna[x];
    }

    cout << "The sum from array is " << sum << "\n";
}
/*
    Tips:
    
    Remember: 
    x++ same as x = x + 1
    "sum += tuna[x]" same as "sum = sum + tuna"

    How the code works?
    
    When loops run on first time..
    0 += 1     /    sum += tuna[0]
    
    When loops run on second times..
    1 += 2     /    sum += tuna[1]
    
    When loops run on third times..
    3 += 3     /    sum += tuna[2]
    
    When loops run on fourth times..
    6 += 4     /    sum += tuna[3]
    
    When loops run on fifth times..
    10 += 5    /    sum += tuna[4]
    
    After x is more or equal to 5
    it comes false then stop the loops
    
    That's why the sum is 15
*/

/* Output:

The sum from array is 15

*/