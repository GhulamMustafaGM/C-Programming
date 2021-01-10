
// Write a program that will convert a decimal number into its text equivalent.

#include <iostream>
    using namespace std;

string number(int num)
{
    string stringNum = "";
    switch (num)
    {
    case 1:
        stringNum = "one";
        break;
    case 2:
        stringNum = "two";
        break;
    case 3:
        stringNum = "three";
        break;
    case 4:
        stringNum = "four";
        break;
    case 5:
        stringNum = "five";
        break;
    case 6:
        stringNum = "six";
        break;
    case 7:
        stringNum = "seven";
        break;
    case 8:
        stringNum = "eight";
        break;
    case 9:
        stringNum = "nine";
        break;
    default:
        stringNum = "";
        break;
    }
    return stringNum;
}

//helper function to convert the tens place (i.e. 20s to 90s) of the number
string tensPlace(int num)
{
    string stringNum = "";
    switch (num)
    {
    case 20 ... 29:
        stringNum = "twenty";
        break;
    case 30 ... 39:
        stringNum = "thirty";
        break;
    case 40 ... 49:
        stringNum = "forty";
        break;
    case 50 ... 59:
        stringNum = "fifty";
        break;
    case 60 ... 69:
        stringNum = "sixty";
        break;
    case 70 ... 79:
        stringNum = "seventy";
        break;
    case 80 ... 89:
        stringNum = "eighty";
        break;
    case 90 ... 99:
        stringNum = "ninety";
        break;
    default:
        stringNum = "";
        break;
    }
    return stringNum;
}

//helper function to convert the teens part of the number
string teens(int num)
{
    string stringNum = "";
    switch (num)
    {
    case 10:
        stringNum = "ten";
        break;
    case 11:
        stringNum = "eleven";
        break;
    case 12:
        stringNum = "twelve";
        break;
    case 13:
        stringNum = "thirteen";
        break;
    case 14:
        stringNum = "fourteen";
        break;
    case 15:
        stringNum = "fifteen";
        break;
    case 16:
        stringNum = "sixteen";
        break;
    case 17:
        stringNum = "seventeen";
        break;
    case 18:
        stringNum = "eighteen";
        break;
    case 19:
        stringNum = "nineteen";
        break;
    default:
        stringNum = "";
        break;
    }
    return stringNum;
}

string num2String(int num)
{

    int num2Convert = num;
    string numConverted = "";

    if (num2Convert == 0)
    {
        return "zero";
    }
    if (num2Convert >= 100000000)
    {
        numConverted = number(num2Convert / 100000000) + " hundred";
        num2Convert = num2Convert % 100000000;
    }
    if (num2Convert >= 20000000)
    {
        numConverted = numConverted + " " + tensPlace(num2Convert / 1000000);
        num2Convert = num2Convert % 10000000;
    }
    else if (num2Convert >= 10000000)
    {
        numConverted = numConverted + " " + teens(num2Convert / 1000000) + " million";
        num2Convert = num2Convert % 1000000;
    }
    if (num2Convert >= 1000000)
    {
        numConverted = numConverted + " " + number(num2Convert / 1000000) + " million";
        num2Convert = num2Convert % 1000000;
    }
    if (num2Convert >= 100000)
    {
        numConverted = numConverted + " " + number(num2Convert / 100000) + " hundred";
        num2Convert = num2Convert % 100000;
    }
    if (num2Convert >= 20000)
    {
        numConverted = numConverted + " " + tensPlace(num2Convert / 1000);
        num2Convert = num2Convert % 10000;
    }
    else if (num2Convert >= 10000)
    {
        numConverted = numConverted + " " + teens(num2Convert / 1000) + " thousand";
        num2Convert = num2Convert % 1000;
    }
    if (num2Convert >= 1000)
    {
        numConverted = numConverted + " " + number(num2Convert / 1000) + " thousand";
        num2Convert = num2Convert % 1000;
    }
    if (num2Convert >= 100)
    {
        numConverted = numConverted + " " + number(num2Convert / 100) + " hundred";
        num2Convert = num2Convert % 100;
    }

    if (num2Convert >= 20)
    {
        numConverted = numConverted + " " + tensPlace(num2Convert);
        num2Convert = num2Convert % 10;
    }
    else if (num2Convert >= 10)
    {
        numConverted = numConverted + " " + teens(num2Convert);
        num2Convert = 0;
    }
    if (num2Convert > 0)
    {
        numConverted = numConverted + " " + number(num2Convert);
    }

    return numConverted;
}

int main(int argc, char **argv)
{
    int num = 0;
    cout << "enter a number between 0 to 999999999: ";
    cin >> num;
    if (!cin || num < 0 || num > 999999999)
    {
        cout << "can't convert.\n";
        return 0;
    }
    cout << num2String(num) << endl;
    return 0;
}