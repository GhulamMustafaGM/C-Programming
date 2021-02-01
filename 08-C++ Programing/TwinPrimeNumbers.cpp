// Twin prime numbers

#include <iostream>

bool isPrime(int const &num);

int main()
{
    int start(0), end(0);

    std::cin >> start >> end;

    int temp = 0;
    int twoLess(0), twoMore(0); //numbers that are 2 less or 2 more than the prime number
    for (; start <= end; start++)
    {
        temp = start;
        if (isPrime(temp))
        {
            twoLess = temp - 2;
            twoMore = temp + 2;
            if (isPrime(twoLess))
            {
                std::cout << "(" << twoLess << ", " << temp << ")";
                start += 3;
            }
            else if (isPrime(twoMore))
            {
                start += 3;
                std::cout << "(" << temp << ", " << twoMore << ")";
            }
        }
    }
    std::cout << std::endl;
}

bool isPrime(int const &num)
{
    bool result = true;
    if (num == 0 || num == 1)
    {
        result = false;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if ((num % i) == 0)
            {
                result = false;
                break;
            }
        }
    }
    return result;
}