// Fibonacci series

#include <iostream>
#define Ten_billion 10000000000
#define txt " number:"
using namespace std;

string counter(int i)
{
    string num;
    if (i % 10 == 1)
    {
        num = "st";
    }
    else if (i % 10 == 2)
    {
        num = "nd";
    }
    else if (i % 10 == 3)
    {
        num = "rd";
    }
    else
    {
        num = "th";
    }
    return num;
}

int main()
{

    unsigned long long first = 1, second = 1, sum;
    short int i = 3;
    cout << "          created by Ghulam\n1st" << txt << first << "\n2nd" << txt << second << endl;

    for (; i < 15; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
        cout << i << counter(i) << txt << sum << endl;
    }
    unsigned long long first10_digit1, first10_digit2, second10_digit1, second10_digit2, sum_first10_digit, sum_second10_digit, extra;

    first10_digit1 = first % Ten_billion;
    second10_digit1 = first / Ten_billion;
    first10_digit2 = second % Ten_billion;
    second10_digit2 = second / Ten_billion;
    for (; i < 15; i++)
    {
        sum_first10_digit = first10_digit1 + first10_digit2;
        sum_second10_digit = second10_digit1 + second10_digit2;
        if (sum_first10_digit > Ten_billion)
        {
            extra = sum_first10_digit / Ten_billion;
            sum_first10_digit %= Ten_billion;
            sum_second10_digit += extra;
        }

        first10_digit1 = first10_digit2;
        first10_digit2 = sum_first10_digit;
        second10_digit1 = second10_digit2;
        second10_digit2 = sum_second10_digit;
        if (sum_first10_digit / (Ten_billion / 10) == 0)
        {
            cout << i << counter(i) << txt << sum_second10_digit << 0 << sum_first10_digit << endl;
        }
        else
        {
            cout << i << counter(i) << txt << sum_second10_digit << sum_first10_digit << endl;
        }
    }
    return 0;
}

/* ouput

          created by Ghulam
1st number:1
2nd number:1
3rd number:2
4th number:3
5th number:5
6th number:8
7th number:13
8th number:21
9th number:34
10th number:55
11st number:89
12nd number:144
13rd number:233
14th number:377

*/