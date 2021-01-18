#include <iostream>
#include <ctime>
using namespace std;

void dice(int);

int main()
{
    srand((unsigned int)time(NULL));
    dice(rand() % 6 + 1); // 1..6
    cout << "Thanks for trying this code :) \n";
    cout << "Hit like if you like it :)";
    return 0;
}

void dice(int n)
{
    //patterns (0..9) 2 form
    int s1[] = {0, 16, 257, 273, 325, 341,
                365, 381, 495, 511};
    int s2[] = {0, 16, 68, 84, 325, 341,
                455, 471, 495, 511};
    //select pattern
    int s = rand() % 2 ? s1[n] : s2[n];
    //draw
    int m = 1; //mask
    cout << "+-------+\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        cout << ((s & m) ? "o " : "  ");
        m <<= 1;
        cout << ((s & m) ? "o " : "  ");
        m <<= 1;
        cout << ((s & m) ? "o " : "  ");
        m <<= 1;
        cout << "|\n";
    }
    cout << "+-------+\n";
}