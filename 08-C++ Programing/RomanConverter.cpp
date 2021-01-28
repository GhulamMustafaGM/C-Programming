// Roman numberal converter

#include <iostream>

using namespace std;

void getInput(int *);
void convertToRomanNum(int, string *);
void printResults(int, string);

int main()
{
    // Retrieve number from user
    int input;

    getInput(&input);

    // Convert number into Roman Numeral
    string roman = "";

    convertToRomanNum(input, &roman);

    // Output results
    printResults(input, roman);

    return 0;
}

// Gets input from user
void getInput(int *in_ptr)
{
    cout << "Enter a number: ";

    cin >> *in_ptr;

    while (cin.fail())
    {
        cout << "\n\nInvalid input.";
        cout << "\n\nEnter a number: ";

        cin.clear();

        cin.ignore(10000, '\n');

        cin >> *in_ptr;
    }
}

// Converts number given into roman numeral
// recursively
void convertToRomanNum(int num, string *rom)
{
    if (num == 0)
    {
        return;
    }
    else if (num >= 1000)
    {
        *rom = *rom + "M";
        convertToRomanNum(num - 1000, rom);
    }
    else if (num >= 900)
    {
        *rom = *rom + "CM";
        convertToRomanNum(num - 900, rom);
    }
    else if (num >= 500)
    {
        *rom = *rom + "D";
        convertToRomanNum(num - 500, rom);
    }
    else if (num >= 400)
    {
        *rom = *rom + "CD";
        convertToRomanNum(num - 400, rom);
    }
    else if (num >= 100)
    {
        *rom = *rom + "C";
        convertToRomanNum(num - 100, rom);
    }
    else if (num >= 90)
    {
        *rom = *rom + "XC";
        convertToRomanNum(num - 90, rom);
    }
    else if (num >= 50)
    {
        *rom = *rom + "L";
        convertToRomanNum(num - 50, rom);
    }
    else if (num >= 40)
    {
        *rom = *rom + "XL";
        convertToRomanNum(num - 40, rom);
    }
    else if (num >= 10)
    {
        *rom = *rom + "X";
        convertToRomanNum(num - 10, rom);
    }
    else if (num == 9)
    {
        *rom = *rom + "IX";
        convertToRomanNum(num - 9, rom);
    }
    else if (num >= 5)
    {
        *rom = *rom + "V";
        convertToRomanNum(num - 5, rom);
    }
    else if (num == 4)
    {
        *rom = *rom + "IV";
        convertToRomanNum(num - 4, rom);
    }
    else
    {
        *rom = *rom + "I";
        convertToRomanNum(num - 1, rom);
    }
}

// Prints original number and roman numeral
// conversion
void printResults(int orig, string rom_num)
{
    cout << "\n\nNumber Entered: " << orig;
    cout << "\nRoman Numeral: " + rom_num;
}