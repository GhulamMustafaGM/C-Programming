
// challenge patter n

// Challenge Print the Patern by Krishna Teja Yeluripati
//
// Write a program to output the following patterns given the number of rows:
//
// Pattern #1
// 1
// 22
// 333
// 4444
// 55555
// and so on.
//
// Pattern #2
// 1
// 12
// 123
// 1234
// 12345
// and so on.
//
// Pattern #3
// 1
// 13
// 135
// 1357
// 13579
// and so on.
//
// Pattern # 4
// 0
// 01
// 010
// 0101
// 01010
// and so on.
//
// this code is created by tooselfish 😉

#include <iostream>

int main()
{

    // Pattern #1
    std::cout << "Pattern nr. 1:" << std::endl;
    int a, b;
    for (a = 1; a <= 9; a++)
    {
        for (b = 1; b <= a; b++)
        {
            std::cout << a;
        }
        std::cout << "\n";
    }

    // Pattern #2
    std::cout << "\nPattern nr. 2:" << std::endl;
    int c, d;
    for (c = 1; c <= 9; c++)
    {
        for (d = 1; d <= c; d++)
        {
            std::cout << d;
        }
        std::cout << "\n";
    }

    // Pattern #3
    std::cout << "\nPattern nr. 3:" << std::endl;
    int e, f;
    for (e = 1; e <= 9; e++)
    {
        for (f = 1; f <= e + e; f++)
        {
            std::cout << f++;
        }
        std::cout << "\n";
    }

    // Pattern #4
    std::cout << "\nPattern nr. 4:" << std::endl;
    int g, h;
    for (g = 0; g <= 9; g++)
    {
        for (h = 0; h <= g; h++)
        {
            std::cout << h % 2;
        }
        std::cout << "\n";
    }

    return 0;
}