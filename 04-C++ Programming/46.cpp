// Character Identifier

// Enter a character .
/* Code will identify if your character
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

/* ouput


 Enter a character :G

You entered : G
It is an uppercase character.

*/