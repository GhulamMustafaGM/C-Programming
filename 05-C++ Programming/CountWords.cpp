// count number of words

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, l, w = 0;
    char line[80];
    cin.getline(line, 80);
    l = strlen(line);
    for (i = 0; i < l; i++)
    {
        if (line[i] == ' ')
            w++;
        line[i] = '-';
    }
    cout << line << endl;
    cout << w + 1;
    return 0;
}