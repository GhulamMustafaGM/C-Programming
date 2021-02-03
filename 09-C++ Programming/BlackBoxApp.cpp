// The Black Box
// Challenge: Find The Black Box!


#include <iostream>
#include <ctime>
using namespace std;

void Randomize()
{
    srand(time(0));
}

int RandomRange(int min_inclusive, int max_inclusive)
{
    return rand() % (max_inclusive - min_inclusive + 1) + min_inclusive;
}

int StringToInteger(std::string input)
{
    return std::stoi(input);
}

std::string ToString(int input)
{
    return std::to_string(input);
}

void print(std::string input)
{
    std::cout << input << std::endl;
}

int main()
{
    print("===========================");
    print("Find The Black Box!");
    print("===========================");
    print(" ");

    Randomize();

    int BlackBoxArray[100];

    for (int i = 1; i <= 100; i++) //Generate 100 Boxes
    {
        BlackBoxArray[i] = RandomRange(10, 20); //With weights between 10 and 20
    }

    if (RandomRange(0, 1) == 0) //Black Box, lighter or heavier
    {
        BlackBoxArray[RandomRange(1, 100)] = RandomRange(1, 9); //lighter
    }
    else
    {
        BlackBoxArray[RandomRange(1, 100)] = RandomRange(21, 30); //heavier
    }

    for (int i = 1; i <= 100; i++) //Find the Black Box
    {
        if (BlackBoxArray[i] > 20 || BlackBoxArray[i] < 10)
        {
            print("The Black Box is: Box " + ToString(i) + " with " + ToString(BlackBoxArray[i]) + "kg");
        }
    }

    print("");
    print("========== All Boxes ==========");
    print("");

    for (int i = 1; i <= 100; i++) //Display all boxes
    {
        print("Box " + ToString(i) + ": " + ToString(BlackBoxArray[i]) + "kg");
    }

    cout << " " << endl;
    cout << " " << endl;
    cout << "Thanks for testing my code! Good luck :)";

    return 0;
}