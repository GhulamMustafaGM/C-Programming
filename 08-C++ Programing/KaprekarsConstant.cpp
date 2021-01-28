// kaprekars constant

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

/*
This code is my go at the Kaprekar routine. It takes in any k-digit number and arranges it in descending and ascending order. Then it subtracts the smaller from the bigger one. You get a new number on which the routine is repeated until it reaches 0, a constant, or a repeating loop and prints the result. Hope you like it and give suggestions for improvement. :)
*/

std::string int_to_string(int number)
{

    std::stringstream ss;

    ss << number;

    return ss.str();
}

int string_to_int(const std::string &number)
{

    int result;

    std::stringstream ss(number);

    return ss >> result ? result : 0;
}

void check_for_result(bool &result, std::vector<int> v)
{

    result = false;

    if (v.size() > 1)
    {
        int i = v.size() - 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[i] == v[j])
            {
                result = true;
                if (i - j == 1)
                {
                    if (v[i] == 0)
                    {
                        std::cout << "This number results in 0." << std::endl;
                    }
                    else
                    {
                        std::cout << "The final constant is: " << v[i] << std::endl;
                    }
                }
                else
                {
                    std::cout << "This number results in the following loop: " << std::endl;
                    for (int k = j; k <= i; k++)
                    {
                        std::cout << v[k] << std::endl;
                    }
                }
            }
        }
    }
}

int main()
{

    std::string s;
    std::string s1;
    std::string s2;
    std::string news;
    int i, i1, i2;
    std::vector<int> v(1);
    bool finished = false;

    std::cin >> s;

    s1.resize(s.length());
    s2.resize(s.length());
    news.resize(s.length());

    news = s;

    while (!finished)
    {

        for (int k = 0; k < s.length(); k++)
        {

            s[k] = news[k];
            s1[k] = s[k];
            s2[k] = s[k];
        }

        std::sort(s1.begin(), s1.end(), std::greater<char>());
        std::sort(s2.begin(), s2.end(), std::less<char>());

        i1 = string_to_int(s1);
        i2 = string_to_int(s2);

        i = i1 - i2;

        v.push_back(i);

        check_for_result(finished, v);

        news = int_to_string(i);
    }

    return 0;
}