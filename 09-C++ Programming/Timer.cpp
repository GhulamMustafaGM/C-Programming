// Timer

#include <iostream>
using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    int H = N / 3600 % 24;
    int M = N % 3600 / 60;
    int S = N % 3600 % 60;
    cout << H << ":" << M / 10 << M % 10 << ":" << S / 10 << S % 10;
    return 0;
}