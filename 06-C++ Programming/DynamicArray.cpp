// Dynamic array

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num; 
    cout << "Enter integer value:";
    cin >> num;
    int *p_darr = new int[num];
    for (int i = 0; i < num; i++)
    {
        p_darr[i] = i;
        cout << "Value of" << i << "Element is" << p_darr[i] << endl;
    }
    delete[] p_darr;
    return 0;
}
