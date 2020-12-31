#include <iostream>
using namespace std;

void print_vertical(char *str);

int main(int argc, char *argv[])
{
    if (argc == 2)
        print_vertical(argv[1]);
    return 0;
}
void print_vertical(char *str)
{
    while (*str)
        cout << *str++ << '\n';
}

// Rework find_substr() to return a pointer.
#include <iostream>
using namespace std;

char *find_substr(char *sub, char *str);

int main()
{
    char *substr;
    substr = find_substr("three", "one two three four");
    cout << "substring found: " << substr;
    return 0;
}
// Return pointer to substring or null if not found.
char *find_substr(char *sub, char *str)
{
    int t;
    char *p, *p2, *start;
    for (t = 0; str[t]; t++)
    {
        p = &str[t]; // reset pointers
        start = p;
        p2 = sub;
        while (*p2 && *p2 == *p)
        { // check for substring
            p++;
            p2++;
        }

        /* If at end of p2 (i.e., substring), then
a match has been found. */
        if (!*p2)
            return start; // return pointer to beginning of substring
    }
    return 0; // no match found
}

/* output:
substring found: three four
*/