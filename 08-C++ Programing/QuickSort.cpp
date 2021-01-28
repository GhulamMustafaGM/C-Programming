// quick sort

#include <iostream>
using namespace std;
template <class T>
void swap(T *A, int i, int j)
{
    T t = A[i];
    A[i] = A[j];
    A[j] = t;
}

template <class T>
void quicksort(T *A, int p, int q) //p=left & q=right
{
    int min = (p + q) / 2;
    int i = p;
    int j = q;
    T pivot = A[min];

    while (p < j || i < q)
    {
        while (A[i] < pivot)
            i++;
        while (A[j] > pivot)
            j--;

        if (i <= j)
        {
            swap(A, i, j);
            i++;
            j--;
        }
        else
        {
            if (p < j)
                quicksort(A, p, j);
            if (i < q)
                quicksort(A, i, q);
            return;
        }
    }
}

int main()
{
    int i[] = {3, 2, 5, 6, 1, 8, 9, 3, 6, 9};
    quicksort(i, 0, 9);
    for (int j = 0; j < 10; j++)
        cout << i[j] << ' ';
    return 0;
}