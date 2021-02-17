// Function sw parameters

/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/
#include <iostream>
using namespace std;

void printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int m1, int m2, int product)
{
    cout << " 4 * 5 = " << product << endl;
}

/* output 

 4 * 5 = 20
 
*/