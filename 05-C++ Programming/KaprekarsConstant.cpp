// kaprekars constant

#include <algorithm>
#include <iostream>
using namespace std;

int StringToInteger(std::string input)
{
    return std::stoi(input);
}
string ToString(int input)
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
    print("Kaprekars Constant!");
    print("===========================");
    print(" ");

    string input = "8723";

    getline(cin, input);

    const int KaprekarsConstant = 6174;
    int result = 0;
    int Iteration = 0;

    while (result != KaprekarsConstant)
    {
        Iteration++;

        string num_1 = input;

        std::sort(num_1.begin(), num_1.end());

        string num_2 = num_1;

        reverse(num_2.begin(), num_2.end());

        result = StringToInteger(num_2) - StringToInteger(num_1);

        if (result == 0 || input.length() < 4 || input.length() > 4 || Iteration > 99)
        {
            print("False input! - Number should contain at least two different numbers and should be four digits long!");
            break;
        }

        print("Iteration " + ToString(Iteration) + " " + num_2 + " - " + num_1 + " = " + ToString(result));
        print("");

        input = ToString(result);
    }

    print("");
    print("Found Kaprekars Constant: " + ToString(result) + " after " + ToString(Iteration) + " Iterations!");
    print("");

    cout << " " << endl;
    cout << " " << endl;
    cout << "Thanks for testing my code! Regards Edwin :)";

    return 0;
}