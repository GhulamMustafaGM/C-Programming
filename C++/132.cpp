
// strcat(s1, s2)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20], s2[10];

    strcpy(s1, "Hello");
    strcpy(s2, "there");

    strcat(s1, s2);
    cout << s1 << endl;

    return 0;
}

/* 

Hello there!

*/