// Deficient and abundant numbers

#include <iostream>
#include <vector>

/*

This code can be used to determine what numbers in a given range are deficient or abundant. 
A deficient number is a positive integer that is if multiplied by 2 greater than the sum of its proper positive divisors.
A deficient number is a positive integer that is if multiplied by 2 greater than the sum of its proper positive divisors.
This code takes the lower and the upper border of the range as input. For example 1 and 50. 
I hope you like it or give suggestions for improvement :)

*/

void whatIsIt(int n)
{

    std::vector<int> v(0);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            v.push_back(i);
        }
    }

    for (int j = 0; j < v.size(); j++)
    {

        count += v[j];
    }

    if (count < n * 2)
    {
        std::cout << n << " is a deficiant number." << std::endl;
    }
    else if (count > n * 2)
    {
        std::cout << n << " is a abundant number." << std::endl;
    }
    else
    {
        std::cout << n << " is a special case because the sum and twice the number are equal." << std::endl;
    }
}

int main()
{

    int u, o;

    try
    {
        std::cout << "Please enter the lower border:" << std::endl;
        std::cin >> u;
        std::cout << "Please enter the upper border:" << std::endl;
        std::cin >> o;

        if (o <= u || o <= 0 || u < 0)
        {
            throw 0;
        }
    }
    catch (int e)
    {
        std::cout << "Invalid input." << std::endl;
        return 0;
    }

    for (int i = u; i <= o; i++)
    {
        whatIsIt(i);
    }

    return 0;
}