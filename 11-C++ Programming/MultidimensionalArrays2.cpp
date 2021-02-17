// Multidimensional Arrays Program
/*

In this program you will initialize a 4x4 array and a one dimensional array of four elements (also known as 
a vector). Multiply the array by the vector and print out the resultant vector. It should contain four elements.

*/

/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include <iostream>

using namespace std;

int main()
{
    // array dimensions must be known at compile time
    // so I used const int to tset the row and coL numbers

    const int row = 4;
    const int col = 4;

    int arr[row][col];
    int vector[row], product[row];
    int sum;

    //get the values for the array from the user
    for (int i = 0; i < row; i++)
        for (int j = 0; j < row; j++)
        {
            cout << "arr[" << i << "][" << j << "] = " << endl;
            cin >> arr[i][j];
            // cout << "arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\n";
        }

    // getting the values fo rthe vector from the user
    for (int i = 0; i < row; i++)
    {
        cout << "vecotr[" << i << "] = " << endl;
        cin >> vector[i];
        // cout <<"vector["<<i<<"] = "<<vector[i]<<"\n";
    }
    sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum = (arr[i][j] * vector[i]) + sum;
        }
        product[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < row; i++)
    {
        cout << "product" << i << "] = " << product[i] << endl;
    }

    return 0;
}

/* output

arr[0][0] =
1
arr[0][1] =
2
arr[0][2] =
3
arr[0][3] =
4
arr[1][0] =
5
arr[1][1] =
6
arr[1][2] =
7
arr[1][3] =
8
arr[2][0] =
9
arr[2][1] =
10
arr[2][2] =
11
arr[2][3] =
12
arr[3][0] =
13
arr[3][1] =
14
arr[3][2] =
15
arr[3][3] =
16
vecotr[0] =
2
vecotr[1] =
2
vecotr[2] =
2
vecotr[3] =
2
product0] = 20
product1] = 52
product2] = 84
product3] = 116

*/