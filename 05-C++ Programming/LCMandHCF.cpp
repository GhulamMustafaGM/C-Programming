// LCM and HCF program

/* 
    LCM is the least common multiple of a set of numbers.
    HCF is the highest common factor of a set of numbers.

    Consider 10 and 15:
    Multiples of 10 are: 10, 20, 30, 40, ...
    Multiples of 15 are: 15, 30, 45, 60, ...
    => 30 is the LCM of 10 and 15.

    Factors of 10 are: 1, 2, 5, 10
    Factors of 15 are: 1, 3, 5, 15
    => 5 is the HCF of 10 and 15.

    Tasks:
    (Easy) Write a program to find the LCM and HCF of 2 numbers.
    (Medium) Write a program to find the LCM and HCF of 3 numbers.
    (Hard) Write a program to find the LCM and HCF of 4 or more numbers.

*/

#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>
#define lint long long unsigned int

namespace utils
{
    lint lcm(const std::vector<lint> &); // least common multiple
    lint hcf(const std::vector<lint> &); // highest common factor
    lint biggest(const std::vector<lint> &);

    std::vector<lint> getFactors(const lint &);                 // high to low
    std::vector<std::pair<lint, lint>> factorize(const lint &); // in primes, low to high

    std::vector<lint> filterToPrime(const std::vector<lint> &);

    bool isPrime(const lint &);

} // namespace utils

std::vector<lint> utils::getFactors(const lint &input)
{
    std::vector<lint> output;
    output.push_back(input);

    if (1 < input)
        for (lint i = input / 2; i > 1; --i)
            if (0 == input % i)
                output.push_back(i);

    return output;
}

std::vector<std::pair<lint, lint>> utils::factorize(const lint &input)
{
    std::vector<std::pair<lint, lint>> output;
    std::vector<lint> temp = utils::filterToPrime(utils::getFactors(input));
    std::vector<lint>::reverse_iterator rit = temp.rbegin();

    bool isNew = true;
    for (lint i = input; i > 1 && rit != temp.rend();)
    {
        if (0 == i % *rit)
        {
            i /= *rit;

            if (true == isNew)
            {
                isNew = false;
                output.push_back(std::make_pair(*rit, 1));
            }
            else
            {
                output.back().second++;
            }
        }
        else
        {
            ++rit;
            isNew = true;
        }
    }
    if (true == output.empty())
        output.push_back(std::make_pair(1, 1));

    return output;
}

std::vector<lint> utils::filterToPrime(const std::vector<lint> &input)
{
    std::vector<lint> output;

    for (size_t it = 0; it < input.size(); ++it)
        if (utils::isPrime(input[it]))
            output.push_back(input[it]);

    return output;
}

bool utils::isPrime(const lint &input) // 0 return true
{
    for (lint i = input / 2; i > 1; --i)
        if (0 == input % i)
            return false;

    return true;
}

lint utils::lcm(const std::vector<lint> &input)
{
    lint output = 1;

    // step 1 : factorize data inside one whole container
    std::vector<std::pair<lint, lint>> factorized;
    std::vector<std::pair<lint, lint>> factorizedTot;

    for (size_t it = 0; it < input.size(); ++it)
    {
        factorized = utils::factorize(input[it]);
        factorizedTot.insert(std::end(factorizedTot), std::begin(factorized), std::end(factorized));
    }

    // Step 2 : choose the bigger times a factor is used
    for (size_t it = 0; it < factorizedTot.size(); ++it)
    {
        if (1 == factorizedTot[it].first) // neutralized factor
            continue;

        for (size_t itCheck = it + 1; itCheck < factorizedTot.size(); ++itCheck)
        {
            if (1 == factorizedTot[itCheck].first) // neutralized factor
                continue;

            if (factorizedTot[it].first == factorizedTot[itCheck].first)
            {
                if (factorizedTot[itCheck].second > factorizedTot[it].second) // times
                    factorizedTot[it].second = factorizedTot[itCheck].second;

                factorizedTot[itCheck].first = 1; // neutralize factor
            }
        }
    }

    // Final step : multiply factors
    for (size_t it = 0; it < factorizedTot.size(); ++it)
        for (int i = 0; i < factorizedTot[it].second; ++i)
            output *= factorizedTot[it].first;

    return output;
}

lint utils::hcf(const std::vector<lint> &input)
{
    std::vector<lint> biggestFactors = utils::getFactors(utils::biggest(input));

    lint hcf = 1;

    for (std::size_t itFactors = 0; itFactors < biggestFactors.size(); ++itFactors)
    {
        bool isHcf = true;

        for (std::size_t itInput = 0; itInput < input.size(); ++itInput)
        {
            if (0 != input[itInput] % biggestFactors[itFactors])
            {
                isHcf = false;
                break;
            }
        }

        if (true == isHcf)
        {
            hcf = biggestFactors[itFactors];
            break;
        }
    }

    return hcf;
}

lint utils::biggest(const std::vector<lint> &input)
{
    lint biggest = 0;
    for (std::size_t it = 0; it < input.size(); ++it)
        if (input[it] > biggest)
            biggest = input[it];

    return biggest;
}

template <typename T>
void printVec(std::vector<T> &input)
{
    for (std::vector<lint>::iterator it = input.begin(); it != input.end(); ++it)
        std::cout << *it
                  << " ";
}

template <typename T>
void printData(std::vector<T> &input)
{
    std::cout << "[ ";
    printVec(input);
    std::cout << "]"
              << std::endl
              << " LCM: "
              << utils::lcm(input)
              << std::endl
              << " HCF: "
              << utils::hcf(input)
              << std::endl
              << std::endl;
}

int main()
{
    std::srand(std::time(0));

    std::vector<lint> input;

    std::cout << "Enter some integers.\nOr just submit for a random set\n";

    lint in;
    while (true)
    {
        in = NULL;
        std::cin >> in;
        if (in == NULL)
            break;
        else
            input.push_back(in);
    }

    if (input.empty() == true)
    {
        std::cout << "Generating random set..\n";

        for (int i = std::rand() % 8 + 2; i > 0; --i)
            input.push_back(std::rand() % 10000 + 1);
    }

    printData(input);

    std::cout << std::endl
              << std::endl;

    std::cout << "\nSome samples\n\n";

    std::vector<lint> sample1{28, 70, 140};
    std::vector<lint> sample2{150, 45, 75};
    std::vector<lint> sample3{2, 20, 200};
    std::vector<lint> sample4{500, 1, 1000};

    printData(sample1);
    printData(sample2);
    printData(sample3);
    printData(sample4);

    std::cout << "\n\nEND\n";

    return 0;
}