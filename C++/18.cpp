/* C++ program - calculate grade of student */
#include <iostream>
using namespace std;

int main()
{
    int mark[5], i;
    float sum = 0, avg;

    cout << "Enter marks obtained in 5 subjects:";

    for (i = 0; i < 5; i++)
    {
        cin >> mark[i];
        sum = sum + mark[i];
    }

    avg = sum / 5;
    cout << "Your grade is ";
    if (avg > 80)
    {
        cout << "A";
    }
    else if (avg > 60 && avg <= 80)
    {
        cout << "B";
    }
    else if (avg > 40 && avg <= 60)
    {
        cout << "C";
    }
    else
    {
        cout << "D";
    }

    return 0;
}

/*output 
Enter marks obtained in 5 subjects:56
67
78
89
90
Your grade i