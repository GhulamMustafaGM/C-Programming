// Bubble Sort


#include <iostream>
using namespace std;

int main()
{
    int array[7] = {9, 7, 8, 3, 5, 2, 1};
    int lenght = 7;
    int temp;
    int j = 0;
    while (j < lenght - 1)
    {
        int i = 0;
        while (i < lenght - 1)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
            i = i + 1;
        }
        j = j + 1;
    }

    for (int i = 0; i < lenght; i++)
    {
        cout << array[i];
    }

    return 0;
}