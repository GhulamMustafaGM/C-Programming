#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;
void gtRndmNumz(int arr2[]);
void asynmint(int arr1[], int arr2[]);

int main()
{
    //declarations:
    int arr1[10] = {-1};
    int arr2[111] = {-1};
    //function calls:
    gtRndmNumz(arr2);
    asynmint(arr1, arr2);
    return 0;
} //end of main

void gtRndmNumz(int arr2[])
{
    int hy = 9, lo = 0;
    time_t sekindz;
    time(&sekindz);
    srand((unsigned int)sekindz);
    for (int z = 0; z < 111; ++z)
    {
        arr2[z] = rand() % (hy - lo + 1) + lo;
        cout << arr2[z] << " ";
    }
    cout << "\n"
         << endl;
} //end of gtRndmNumz

void asynmint(int arr1[], int arr2[])
{
    int elem[10], indx, numAr, xtr = 11;
    numAr = arr2[0]; //numb of arrays
    indx = numAr;
    for (int y = 0; y < 10; ++y)
    {
        //number of elements per array
        elem[y] = arr2[y + 1] + 1;
    }
    while (numAr > 0)
    {
        for (int a = 0; a < elem[indx - numAr]; ++a)
        {
            arr1[a] = arr2[a + xtr];
            cout << arr1[a] << " ";
        }
        cout << endl;
        xtr += elem[indx - numAr];
        --numAr;
    }
} //end of asynmint