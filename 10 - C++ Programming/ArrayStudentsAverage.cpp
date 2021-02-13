// array : students above the average

#include <iostream>
using namespace std;

double ave(double x[], int y)
{
    int i;
    double sum = 0.0;
    for (i = 0; i < y; i++)
        sum = sum + x[i];
    return sum / y;
}

int main()
{

    int i, n;

    cout << "Enter number of studnets :" << endl;
    cin >> n;

    double arr[n], c1 = 0.0, c2 = 0.0, c3 = 0.0, max;
    string ar[n], name = "hi", arrr[n];

    for (i = 0; i < n; i++)
    {

        cout << "Enter item #" << i + 1 << " name:" << endl;
        cin >> ar[i];

        cout << "Enter item #" << i + 1 << " grade:" << endl;
        cin >> arr[i];

        max = arr[0];
        name = ar[0];
        if (arr[i] >= max)
        {
            max = arr[i];
            name = ar[i];
        }
    }

    ave(arr, n);

    cout << "Results :" << endl;
    cout << "Student with max mark is " << name << " of mark" << max << endl;
    cout << "Student Average=" << ave(arr, n) << endl;
    cout << "Students with marks above average are :" << endl;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > ave(arr, n))
            cout << ar[i] << endl;
    }
}