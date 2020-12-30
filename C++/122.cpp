#include <iostream>

using namespace std;

int main()
{
    int t, count;

    for (t = 0; t < 10; t++)
    {
        count = 1;

        for (;;)
        {
            cout << count << ' ';
            count++;
            if (count == 10)
                break;
        }
        cout << endl;
    }

    return 0;
}

/* output:

1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9

*/
