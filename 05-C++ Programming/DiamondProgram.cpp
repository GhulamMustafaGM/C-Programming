// Diamond

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const size_t len = 20;

    for (size_t i = 0; i < len / 2; ++i)
    {
        const size_t sharp = len / 2 - i;

        cout << string(sharp, '#');
        cout << string(i * 2, ' ');
        cout << string(sharp, '#');
        cout << endl;
    }

    for (size_t i = len / 2 - 1; 0 < i; --i)
    {
        const size_t sharp = len / 2 - i;

        cout << string(sharp, '#');
        cout << string(i * 2, ' ');
        cout << string(sharp, '#');
        cout << endl;
    }
    cout << string(len / 2 * 2, '#');

    return 0;
}