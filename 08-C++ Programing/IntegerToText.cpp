// Transfer integer into text

#include <iostream>
#include <string>
using namespace std;

int CountofDigits(int number)
{
    int y = 1;
    for (int x = 0; x < 12; x++)
    {
        number /= 10;
        if (number > 0)
            y++;
        else
            break;
    }
    return y;
}

string CheckOnes(int x)
{
    string TextOnes;
    switch (x)
    {
    case 1:
        TextOnes = "One ";
        break;
    case 2:
        TextOnes = "Two ";
        break;
    case 3:
        TextOnes = "Tree ";
        break;
    case 4:
        TextOnes = "Four ";
        break;
    case 5:
        TextOnes = "Five ";
        break;
    case 6:
        TextOnes = "Six ";
        break;
    case 7:
        TextOnes = "Seven ";
        break;
    case 8:
        TextOnes = "Eight ";
        break;
    case 9:
        TextOnes = "Nine ";
        break;
    }
    return TextOnes;
}

string CheckTens(int x)
{
    string TextTens;
    switch (x)
    {
    case 1:
        TextTens = "Ten ";
        break;
    case 2:
        TextTens = "Twenty ";
        break;
    case 3:
        TextTens = "Thirty ";
        break;
    case 4:
        TextTens = "Forty ";
        break;
    case 5:
        TextTens = "Fifty ";
        break;
    case 6:
        TextTens = "Sixty ";
        break;
    case 7:
        TextTens = "Seventy ";
        break;
    case 8:
        TextTens = "Eighty ";
        break;
    case 9:
        TextTens = "Ninety ";
        break;
    }
    return TextTens;
}

string CheckTeenNumbers(int x)
{
    string TextTeenNumbers;
    switch (x)
    {
    case 11:
        TextTeenNumbers = "Eleven ";
        break;
    case 12:
        TextTeenNumbers = "Twelve ";
        break;
    case 13:
        TextTeenNumbers = "Thirteen ";
        break;
    case 14:
        TextTeenNumbers = "Fourteen ";
        break;
    case 15:
        TextTeenNumbers = "Fifteen ";
        break;
    case 16:
        TextTeenNumbers = "Sixteen ";
        break;
    case 17:
        TextTeenNumbers = "Seventeen ";
        break;
    case 18:
        TextTeenNumbers = "Eighteen ";
        break;
    case 19:
        TextTeenNumbers = "Nineteen ";
        break;
    }
    return TextTeenNumbers;
}

string AnalysCoD(int number, int CoD)
{
    string TextNumber;

    int iterationCount = 0;
    while (CoD > 0)
    {
        string textDigits;
        ++iterationCount;
        int x = number % 100;
        if (x <= 10 or x > 19)
        {
            x = number % 10;
            if (x > 0)
                textDigits = CheckOnes(x) + textDigits;
            x = number % 100 / 10;
            if (x > 0)
                textDigits = CheckTens(x) + textDigits;
        }
        else
        {
            textDigits = CheckTeenNumbers(x) + textDigits;
        }
        x = number % 1000 / 100;
        if (x != 0)
            textDigits = CheckOnes(x) + "Hundred " + textDigits;
        if (iterationCount == 2)
            textDigits += "Thousand ";
        if (iterationCount == 3)
            textDigits += "Million ";
        if (iterationCount == 4)
            textDigits += "Billion ";
        TextNumber = textDigits + TextNumber;
        number /= 1000;
        CoD -= 3;
    }

    return TextNumber;
}

int main()
{
    int number;
    cout << "Enter a positive/negative integer: ";
    cin >> number;
    string TextNumber;
    if (number < 0)
    {
        number *= -1;
        TextNumber = "Minus ";
    }
    TextNumber = TextNumber + AnalysCoD(number, CountofDigits(number));
    if (number == 0)
        TextNumber = "Zero ";
    cout << "\nWe transfered your number into text:\n"
         << TextNumber << "\n\nGood luck!\n";
    return 0;
}