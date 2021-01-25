// Change const pointer value

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int n = 20;
    const int *p = &n;
    int a[*p];
    cout << *p << endl;
    int *k;
    k = const_cast<int *>(p);
    *k = 10;
    cout << *p;
    return 0;
}