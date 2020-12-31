#include <iostream>
using namespace std;

void cube(int *n, int num);

int main(int argc, char const *argv[])
{
    int i, nums[10];

    for (i = 0; i < 10; i++)
        nums[i] = i + 1;
    cout << "Original contents: ";

    for (int i = 0; i < 10; ++i)
        cout << nums[i] << ' ';
    cout << endl;

    cube(nums, 10); // computer cubes

    cout << "Altered contents: ";

    for (i = 0; i < 10; i++)
        cout << nums[i] << ' ';
    cout << endl;

    return 0;
}
void cube(int *n, int num)
{
    while (num)
    {
        *n = *n * *n * *n;
        num--;
        n++;
    }
}

/* output:

Original contents: 1 2 3 4 5 6 7 8 9 10
Altered contents: 1 8 27 64 125 216 343 512 729 1000

*/