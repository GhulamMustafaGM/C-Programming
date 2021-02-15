// count your name

#include <iostream>
using namespace std;
int main() //Enter your first name as input
{
    int i, count = 0;
    char a[100];
    cin >> a;
    for (i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Number of words in your name is " << count;
    return 0;
}
