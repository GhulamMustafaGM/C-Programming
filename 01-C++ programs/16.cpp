/*C++ program - Calculate average and percentage marks */

#include <iostream>
using namespace std;

int main()
{
    int mark[5], i;
    float sum = 0;

    cout << "Enter marks obtained in Physics, Chemistry, Maths, CS, English :";

    for (i = 0; i < 5; i++)
    {
        cin >> mark[i];

        sum = sum + mark[i];
    }
    float avg = sum / 5;
    float perc;
    perc = (sum / 500) * 100;
    cout << "Average Marks = " << avg;
    cout << "\nPercentage = " << perc << "%";
}
/*output 

Enter marks obtained in Physics, Chemistry, Maths, CS, English :56
67
78
89
90
Average Marks = 76
Percentage = 76%

*/