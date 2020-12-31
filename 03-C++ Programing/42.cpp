// To see how qsort() can be used, try this program:

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int comp(const void *a, const void *b);

int main()
{
    char str[] = "Function pointers provide flexibility. ";

    qsort(str, strlen(str), 1, comp);
    cout << "sorted string: " << str;

    return 0;
}

int comp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

/* Here is the output:

sorted string:     .Fbcdeeefiiiiiillnnnooopprrstttuvxy

*/