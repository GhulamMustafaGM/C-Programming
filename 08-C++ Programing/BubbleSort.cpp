// Bubble sort app

#include <iostream>
using namespace std;
int length = 0;
int arr[100] = {5};

int push(int num = 5)
{
    arr[length + 1] = num;
    length++;
}

int main()
{
    push(10);
    push(12);
    push(8);
    push(2);
    push(70);

    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= length; j++)
        {
            if (arr[i] < arr[i + j])
            {
                const int keep = arr[i + j];

                arr[i + j] = arr[i];

                arr[i] = keep;

                cout << "Sorting..." << endl;
            }
        }
    }

    for (int i = 0; i <= length; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}