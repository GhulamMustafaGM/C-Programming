// Sum of numberic char-substring program

#include <string>
#include <cctype>
#include <iostream>

/*

[ Assignment Link ]
<Q&A forum>
https://www.sololearn.com/Discuss/1214256/?ref=app

<Lesson Assignment>
* Awaiting approval *

[ Assignment Creator (Host) ]
@Baraa AB
https://www.sololearn.com/Profile/2324544/?ref=app

[ Task Description ]
Accumulate each numeric character within a string. Negative numbers are allowed.

Example:
Input   : 5h-4c7k3d (notice -4)
Result  : 11

*/

int main()
{
    std::string buffer;
    long long value;
    bool neg;

    // Read on while not blank
    std::cout << "Enter string with numeric characters, negative values are allowed.\n";
    while (std::cin >> buffer)
    {
        std::cout << "\nInput: " << buffer << "\n";
        neg = false;
        value = 0;
        for (char ch : buffer)
        {
            // We'll skip non numeric chars,
            // except for negative sign, we'll
            // use it to mark negative number.
            if (!std::isdigit(ch))
            {
                if (ch == '-')
                    neg = !neg;
                continue;
            }

            // Add the character's ASCII value
            // to the result value.
            if (neg)
                value -= (long long)ch - 48;
            else
                value += (long long)ch - 48;
            neg = false;
        }
        std::cout << "Sum of numeric characters: " << value << "\n";
    }
}

/* ouput:

Enter string with numeric characters, negative values are allowed.
gh @ 93 -1

Input: gh
Sum of numeric characters: 0

Input: @
Sum of numeric characters: 0

Input: 93
Sum of numeric characters: 12

Input: -1
Sum of numeric characters: -1

*/