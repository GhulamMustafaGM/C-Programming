/* C++ Program - Print Smiling Face on Screen */

#include <iostream>
using namespace std;

int main()
{
    int sml = 1, i, limit;
    char ch = sml;

    cout << "How many smiley face you want to print ? ";
    cin >> limit;
    for (i = 0; i < limit; i++)
    {
        cout << ch << " ";
    }
    return 0;
}

/*output
How many smiley face you want to print ? 500

*/
