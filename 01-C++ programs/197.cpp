// ---------------------- First File ----------------------
#include <iostream>
using namespace std;

int r_avg(int i);
void reset();
int main()
{
    int num;
    do
    {
        cout << "Enter numbers (-1 to quit, -2 to reset): ";

        cin >> num;
        if (num == -2)
        {
            reset();
            continue;
        }
        if (num != -1)
            cout << "Running average is: " << r_avg(num);
        cout << '\n';
    } while (num != -1);
    return 0;
}

// ---------------------- Second File ----------------------
static int sum = 0, count = 0;
int r_avg(int i)
{
    sum = sum + i;
    count++;
    return sum / count;
}
void reset()
{
    sum = 0;
    count = 0;
}

/* output:

Enter numbers (-1 to quit, -2 to reset): 22
Running average is: 22
Enter numbers (-1 to quit, -2 to reset): 33
Running average is: 27
Enter numbers (-1 to quit, -2 to reset): 04
Running average is: 19
Enter numbers (-1 to quit, -2 to reset): 200
Running average is: 64
Enter numbers (-1 to quit, -2 to reset): -2
Enter numbers (-1 to quit, -2 to reset): 100
Running average is: 100
Enter numbers (-1 to quit, -2 to reset): 100
Running average is: 100
Enter numbers (-1 to quit, -2 to reset): 20
Running average is: 73
Enter numbers (-1 to quit, -2 to reset): -1

*/