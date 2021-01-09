// Bigest number program

#include <iostream>
using namespace std;

template <typename R, typename... T>
R bigest(T... param)
{
    const int size = sizeof...(param);
    const R args[size] = {param...};
    R big = args[0];
    for (int i = 0; i < size; i++)
    {
        if (big < args[i])
        {
            big = args[i];
        }
    }
    return big;
}

int main(void)
{
    // Your code goes here
    cout << bigest<int>(12, 45, 78, 90, 65) << endl;
    cout << bigest<float>(12.3, 12.4, 12.1);
    return 0;
}