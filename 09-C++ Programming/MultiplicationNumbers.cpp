// multplication of postive elements

#include <iostream>

using namespace std;

int main()
{

    int elem[10];
    int r;
    int kop = 1;
    cout << "Input 10 integer numbers(positive or negative): ";
    do
    {
        cin >> elem[r];
        r++;
    } while (r < 10);

    for (int r = 0; r < 10; r++)
    {
        if (elem[r] > 0)
        {
            kop *= elem[r];
        }
    }
    cout << "Multiplication of positive elements equal to: " << kop;

    return 0;
}
