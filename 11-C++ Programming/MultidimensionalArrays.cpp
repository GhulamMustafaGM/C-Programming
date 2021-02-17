#include <iostream>
using namespace std;

int main()
{
    int array2Dim[2][3] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i < 2; i++)

        for (int j = 0; j < 3; j++)
            cout << "array2Dim[" << i << "][" << j << "] = " << array2Dim[i][j] << endl;

    return 0;
}

/* output 
array2Dim[0][0] = 0
array2Dim[0][1] = 1
array2Dim[0][2] = 2
array2Dim[1][0] = 3
array2Dim[1][1] = 4
array2Dim[1][2] = 5
*/