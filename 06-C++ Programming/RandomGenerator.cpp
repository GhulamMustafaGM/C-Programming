// Random texture generator c++

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
 * Random Texture Generator in C++
 * Made just for fun, let me know what you think.
 * Try to modify constant values to generate different types of worlds!
 * By Techno-Developer
*/

int main()
{
    char grads[3] = {(char)176, (char)177, (char)178};
    float stats[3] = {0, 0, 0};

    const int line_size = 30;
    const int world_size = (line_size * 10) + 1;
    srand(time(NULL));

    for (int i = 1; i < world_size; i++)
    {
        int t = rand() % 3;
        cout << grads[t];
        stats[t]++;
        if (i % line_size == 0)
            cout << endl;
    }

    cout << "\n----- Stats -----\n";
    for (int i = 0; i < 3; i++)
    {
        stats[i] = stats[i] / world_size * 100;
        cout << grads[i] << " " << (int)stats[i] << "%" << endl;
    }

    return 0;
}