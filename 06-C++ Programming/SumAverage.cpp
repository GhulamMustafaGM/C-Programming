// Sum and average in array

#include <iostream>
using namespace std;

int main()
{
    float sum = 0;
    double arr[] = {2, 4, 6, 9, 10};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array values : " << sum << endl;
    cout << "The Average of array value : " << sum / 5 << endl;
    return 0;
}
