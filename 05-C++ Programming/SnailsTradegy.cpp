// Snails tragedy

#include <iostream>
    using namespace std;

int main()
{
    float h, a, b, n;
    cin >> h >> a >> b;
    n = (h - a) / (a - b) + 1;
    cout << "the snail will reach in " << n << " days";
    return 0;
}