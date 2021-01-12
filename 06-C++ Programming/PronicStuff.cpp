// Pronic stuff

#include <iostream>
#include <cmath>
using namespace std;

int *myArr;

//-------------------------------------------
// function declaration:
bool checkPronicNum(int num);
int generatePronicSeries(int num);

//-------------------------------------------
int main()
{
    int myNum = 0, arrSize = 0;
    cin >> myNum;

    cout << "Input Num : " << myNum << endl;

    arrSize = generatePronicSeries(myNum);

    for (int j = 0; j < arrSize; j++)
    {

        if (checkPronicNum(myArr[j]))
        {
            cout << myArr[j] << " is a pronic number" << endl;
        }
        else
        {
            cout << myArr[j] << " is NO pronic number" << endl;
        }
    }
    return 0;
} // end of main

//-------------------------------------------

// function definition:
bool checkPronicNum(int num)
{
    int i;

    for (i = 1; i <= (num / 2); i++)
    { // we will only use the nums from 1 to the half of num, because it will be more efficient and an i greater than the half of num won't be part of the elements of a pronic num
        if (i * (i + 1) == num)
        {
            return true; // is a pronic number
        }
    }
    return false; // is no pronic number
} // end of checkPronicNum()

int generatePronicSeries(int num)
{

    int size = (int)sqrt(num);
    //  user input:
    cout << "array size : " << size << endl;

    myArr = new int[size];
    //  we will begin with 1 (not 0, because we added 1 to i) and end with size and not with (size - 1):
    for (int i = 0; i <= size; i++)
    {
        //  because of a beginning with 1 we used (i + 1)  and (i + 2) alternatively to (i + 1):
        myArr[i] = (i + 1) * (i + 2);
    }
    return size;
} // end of generatePronicSeries()

//-------------------------------------------
// another change we can make, is the return valueas a int pointer the points to the first element of a array list

/* output 

*/

// inline function

#include <iostream>
using namespace std;

class Donald
{

public:
    void donald()
    {
        cout << "Hello" << endl;
    }
};

int main()
{

    Donald obby;
    obby.donald();

    return 0;
}