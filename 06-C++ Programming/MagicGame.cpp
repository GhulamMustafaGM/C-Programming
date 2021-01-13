// Magic Game

#include <iostream>
using namespace std;
int main()
{
    char str[256];
    cout << "Enter your name: " << endl
         << endl;

    cin.getline(str, 256);
    cout << "Your name is: ";
    cout << str;

    cout << endl
         << endl;
    cout << "Your name in symbol: \n\n";

    for (int b = 0; str[b] != '\0'; b++)
    {
        switch (str[b])
        {

        case 'a':
        case 'A':
            cout << "  ******  \n  *    *  \n  ******  \n  *    *  \n  *    *  \n\n"
                 << endl;
            break;

        case 'b':
        case 'B':
            cout << "  ******  \n  *    *  \n  *****   \n  *    *  \n  ******  \n\n"
                 << endl;
            break;

        case 'c':
        case 'C':
            cout << "  ******  \n  *       \n  *       \n  *       \n  ******  \n\n"
                 << endl;
            break;

        case 'd':
        case 'D':
            cout << "  *****   \n  *    *  \n  *    *  \n  *    *  \n  *****   \n\n"
                 << endl;
            break;

        case 'e':
        case 'E':
            cout << "  ******  \n  *       \n  *****   \n  *       \n  ******  \n\n"
                 << endl;
            break;

        case 'f':
        case 'F':
            cout << "  ******  \n  *       \n  *****   \n  *       \n  *       \n\n"
                 << endl;
            break;

        case 'g':
        case 'G':
            cout << "  ******  \n  *       \n  *****   \n  *    *  \n  *****   \n\n"
                 << endl;
            break;

        case 'h':
        case 'H':
            cout << "  *    *  \n  *    *  \n  ******  \n  *    *  \n  *    *  \n\n"
                 << endl;
            break;

        case 'i':
        case 'I':
            cout << "  ******  \n    **    \n    **    \n    **    \n  ******  \n\n"
                 << endl;
            break;

        case 'j':
        case 'J':
            cout << "  ******  \n    **    \n    **    \n  * **    \n  ****    \n\n"
                 << endl;
            break;

        case 'k':
        case 'K':
            cout << "  *   *   \n  *  *    \n  **      \n  *  *    \n  *   *   \n\n"
                 << endl;
            break;

        case 'l':
        case 'L':
            cout << "  *       \n  *       \n  *       \n  *       \n  ******  \n\n"
                 << endl;
            break;

        case 'm':
        case 'M':
            cout << "  *    *  \n  **  **  \n  * ** *  \n  *    *  \n  *    *  \n\n"
                 << endl;
            break;

        case 'n':
        case 'N':
            cout << "  *    *  \n  **   *  \n  * *  *  \n  *  * *  \n  *   **  \n\n"
                 << endl;
            break;

        case 'o':
        case 'O':
            cout << "  ******  \n  *    *  \n  *    *  \n  *    *  \n  ******  \n\n"
                 << endl;
            break;

        case 'p':
        case 'P':
            cout << "  ******  \n  *    *  \n  ******  \n  *       \n  *       \n\n"
                 << endl;
            break;

        case 'q':
        case 'Q':
            cout << "  ******  \n  *    *  \n  * *  *  \n  *  * *  \n  ******  \n\n"
                 << endl;
            break;

        case 'r':
        case 'R':
            cout << "  ******  \n  *    *  \n  * **   \n  *   *   \n  *    *  \n\n"
                 << endl;
            break;

        case 's':
        case 'S':
            cout << "  ******  \n  *       \n  ******  \n       * \n  ******  \n\n"
                 << endl;
            break;

        case 't':
        case 'T':
            cout << "  ******  \n    **    \n    **    \n    **    \n    **    \n\n"
                 << endl;
            break;

        case 'u':
        case 'U':
            cout << "  *    *  \n  *    *  \n  *    *  \n  *    *  \n  ******  \n\n"
                 << endl;
            break;

        case 'v':
        case 'V':
            cout << "  *    *  \n  *    *  \n  *    *  \n   *  *   \n    **    \n\n"
                 << endl;
            break;

        case 'w':
        case 'W':
            cout << "  *    *  \n  *    *  \n  * ** *  \n  **  **  \n  *    *  \n\n"
                 << endl;
            break;

        case 'x':
        case 'X':
            cout << "  *    *  \n   *  *   \n    **    \n   *  *   \n  *    *  \n\n"
                 << endl;
            break;

        case 'y':
        case 'Y':
            cout << "  *    *  \n   *  *   \n    **    \n    **    \n    **    \n\n"
                 << endl;
            break;

        case 'z':
        case 'Z':
            cout << "  ******  \n      *   \n     *    \n    *     \n  ******  \n\n"
                 << endl;
            break;

        case ' ':
            cout << "          \n          \n          \n          \n\n"
                 << endl;
            break;

        case '.':
            cout << "." << endl;
            break;
        }
    }

    cout << "END OF PROGRAM\n"
         << endl;
    cout << "Good luck!" << endl
         << endl;
}