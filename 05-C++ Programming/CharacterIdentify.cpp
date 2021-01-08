// Character identifier

//Enter a character .
/*Code will identify if your character
 is Upper Cased character
    Lower Cased character 
    Digit
    Or any Special character */
#include <iostream>
int main()
{
    char ch;
    std::cout << "\n Enter a character :";
    std::cin >> ch;
    std::cout << "\n"
              << "You entered : " << ch;
    if (ch >= 48 && ch <= 57)
        std::cout << "\n"
                  << "It is a digit.";
    else if (ch >= 65 && ch <= 90)
        std::cout << "\n"
                  << "It is an uppercase character.";
    else if (ch >= 97 && ch <= 122)
        std::cout << "\n"
                  << "It is a lowercase character.";
    else
        std::cout << "\n"
                  << "It is a special character";
    return 0;
}

/* output

*/

// Determine odd or even

/*This C++ program checks whether_a number is odd or even*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if ((x & 2) == 0)
        cout << "The number is odd.";
    else
        cout << "The number is even.";
    return 0;
}