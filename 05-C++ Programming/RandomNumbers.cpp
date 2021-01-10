// Random numbers generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ". " << (rand() % 100000) << endl;
    }
}
