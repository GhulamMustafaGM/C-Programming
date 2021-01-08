//Brain interpreter


#include <cstdio>
#include <iostream>

using namespace std;

void interpret(const char *i);

int main()
{
    interpret("++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>. ");
    return 0;
}

/*
    > increment the data pointer
    < decrement the data pointer
    + increment the byte at the data pointer
    - decrement the byte at the data pointer
    . print the byte at the data pointer
    , accept a byte of input
    [ if the byte at the data pointer is zero, jump forward after "]"
    ] if the byte at the data pointer isn't zero, jump back after "["
*/

void interpret(const char *i)
{
    char *const arr = new char[512];
    for (char *p = arr, *end = arr + 512; p < end; ++p)
        *p = 0;

    char *ptr = arr;
    for (; *i != '\0'; ++i)
    {
        switch (*i)
        {
        case '>':
            ++ptr;
            break;
        case '<':
            --ptr;
            break;
        case '+':
            ++(*ptr);
            break;
        case '-':
            --(*ptr);
            break;
        case '.':
            putchar(*ptr);
            break;
        case ',':
            *ptr = getchar();
            break;
        case '[':
            if (*ptr != 0)
                break;
            ++i;
            for (int b = 0; *i != ']' && *(i + 1) != '\0' && b == 0; ++i)
                if (*i == '[')
                    ++b;
                else if (*i == ']')
                    --b;
            break;

        case ']':
            if (*ptr == 0)
                break;
            --i;
            for (int b = 0; *i != '[' && b == 0; --i)
                if (*i == ']')
                    ++b;
                else if (*i == '[')
                    --b;
            break;

        default:
            break;
        }
    }

    delete[] arr;
}