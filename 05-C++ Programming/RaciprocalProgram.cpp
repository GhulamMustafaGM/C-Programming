// Reciprocal letters

#include <iostream>
using namespace std;

int main()
{

    int j = 0;
    string input;

    cout << "Enter the string: " << endl;
    getline(cin, input);

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            j = input[i] - 'a';
            cout << (char)('z' - j);
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            j = input[i] - 'A';
            cout << (char)('Z' - j);
        }
        else
            cout << input[i];
    }

    return 0;
}