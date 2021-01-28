// insertion sort

#include <iostream>
using namespace std;
template <class T>
void Insertion(T *A)
{
    int n = sizeof(A);
    for (int i = 1; i < n + 1; i++)
    {
        int prev = i - 1;
        while (prev >= 0 && A[prev] > A[prev + 1])
        {
            T tmp = A[prev + 1];
            A[prev + 1] = A[prev];
            A[prev] = tmp;
            prev--;
        }
    }
}
int main(int argc, const char *argv[])
{
    int i[] = {3, 2, 5, 6, 1, 8, 9, 3, 6, 9};
    Insertion(i);
    for (int j = 0; j < 10; j++)
        cout << i[j] << ' ';
    return 0;
}