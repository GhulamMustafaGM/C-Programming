// Tower of Hanoi

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char aux)
{
    if (n == 1)
        cout << "Move the disk from " << src << " to " << dest << endl;
    else
    {
        towerOfHanoi(n - 1, src, aux, dest);
        cout << "Move the disk from " << src << " to " << dest << endl;
        towerOfHanoi(n - 1, aux, dest, src);
    }
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    cout << endl;
    cout << "Solution to the Tower Of Hanoi: " << endl;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}