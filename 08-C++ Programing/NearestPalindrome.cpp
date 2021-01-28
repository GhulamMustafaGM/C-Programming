// Nearest palindrome

#include <iostream>

bool isPalindrome(long long n)
{
    // One digit cannot be Palindrome
    if (n > -11LL && n < 11LL)
        return false;

    long long reversed{0}, nc{n};

    // Now uses arithmetic calculation
    // to reverse the number.
    // [Suggested by @Gordie]
    while (nc)
    {
        reversed = reversed * 10 + nc % 10;
        nc /= 10;
    }
    return n == reversed;
}

// Main procedure
int main()
{
    long long n0, n1;
    short found;

    std::cout << "Enter an integer and we will find nearest Palindrome number less/greater than the number.";

    while (true)
    {
        std::cin >> n0;
        if (!std::cin.good())
            break;

        std::cout << "\n\nNumber: " << n0;
        found = 0;
        n1 = n0;
        do
        {
            if (!(found & 1) && isPalindrome(++n0))
            {
                found += 1;
                std::cout << "\nNearest Palindrome > Number: " << n0;
            }
            if (!(found & 2) && isPalindrome(--n1))
            {
                found += 2;
                std::cout << "\nNearest Palindrome < Number: " << n1;
            }
        } while (found < 3);
    }

    return 0;
}