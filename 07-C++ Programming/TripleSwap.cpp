// Triple pointers Swap program

#include <iostream>
using namespace std;
void SwapWithTriplePtr(int ***ppptr1, int ***ppptr2)
{
    int **temp = *ppptr1;
    *ppptr1 = *ppptr2;
    *ppptr2 = temp;
}
int main()
{
    int num1 = 1, num2 = 2;
    int *ptr1 = &num1, *ptr2 = &num2;
    int **pptr1 = &ptr1, **pptr2 = &ptr2;
    SwapWithTriplePtr(&pptr1, &pptr2);
    cout << "[" << **pptr1 << "," << **pptr2 << "]";
    return 0;
}