// Run and type 4 digits to see magic

#include <iostream>
using namespace std;

int one(int code)
{

    switch (code)
    {

    case 0:
        cout << "*    ";
        break;

    case 1:
        cout << "    *";
        break;

    case 2:
        cout << "  *  ";
        break;

    case 3:
        cout << " *   ";
        break;

    case 4:
        cout << "   * ";
        break;
    }

    cout << "  ";
}

int two(int code)
{

    switch (code)
    {

    case 0:
        cout << "*   *";
        break;

    case 1:
        cout << " * * ";
        break;

    case 2:
        cout << "*  * ";
        break;

    case 3:
        cout << " *  *";
        break;

    case 4:
        cout << "* *  ";
        break;

    case 5:
        cout << "* *  ";
        break;
    }

    cout << "  ";
}

int three(int code)
{

    switch (code)
    {

    case 0:
        cout << "* * *";
        break;

    case 1:
        cout << " *** ";
        break;

    case 2:
        cout << "*  **";
        break;

    case 3:
        cout << "**  *";
        break;

    case 4:
        cout << " ** *";
        break;
    }

    cout << "  ";
}

int four(int code)
{

    switch (code)
    {

    case 0:
        cout << "*** *";
        break;

    case 1:
        cout << " ****";
        break;

    case 2:
        cout << "* ***";
        break;

    case 3:
        cout << "**** ";
        break;

    case 4:
        cout << "** **";
        break;
    }

    cout << "  ";
}

int five()
{

    cout << "*****"
         << "  ";
}

int main()
{

    string word;
    cout << " Enter a word of upto 4 Letters: " << endl;
    cin >> word;
    cout << endl
         << "Okay got it ! - " << word << endl
         << endl
         << endl;
    int y = 4;

    for (int x = 0; x < y; x++)
    {

        char z = (char)toupper(word[x]);
        switch (z)
        {

        case 'A':
        case 'C':
        case 'G':
        case 'O':
        case 'Q':
        case 'S':
            three(1);
            break;

        case 'B':
        case 'D':
        case 'P':
        case 'R':
            four(3);
            break;

        case 'M':
            two(0);
            break;

        case 'E':
        case 'F':
        case 'I':
        case 'J':
        case 'T':
        case 'Z':
            five();
            break;

        case 'H':
        case 'K':
        case 'N':
        case 'U':
        case 'V':
        case 'X':
        case 'Y':
        case 'W':
            two(0);
            break;

        case 'L':
            one(0);
            break;
        }
    }

    cout << endl;

    for (int x = 0; x < y; x++)
    {
        char z = (char)toupper(word[x]);
        switch (z)
        {

        case 'A':
        case 'B':
        case 'D':
        case 'G':
        case 'H':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'U':
        case 'W':
        case 'V':
            two(0);
            break;

        case 'E':
        case 'C':
        case 'F':
        case 'L':
        case 'S':
            one(0);
            break;

        case 'I':
        case 'J':
        case 'T':
            one(2);
            break;

        case 'K':
            two(4);
            break;

        case 'M':
            four(4);
            break;

        case 'N':
            three(3);
            break;

        case 'X':
        case 'Y':
            two(1);
            break;

        case 'Z':
            one(4);
            break;
        }
    }

    cout << endl;

    for (int x = 0; x < y; x++)
    {
        char z = (char)toupper(word[x]);
        switch (z)
        {

        case 'A':
        case 'E':
        case 'F':
        case 'H':
            five();
            break;

        case 'S':
            three(1);
            break;

        case 'B':
        case 'P':
            four(3);
            break;

        case 'R':
            two(5);
            break;

        case 'C':
        case 'L':
        case 'G':
        case 'K':
            one(0);
            break;

        case 'D':
        case 'O':
        case 'U':
        case 'V':
            two(0);
            break;

        case 'Q':
            three(0);
            break;

        case 'I':
        case 'J':
        case 'T':
        case 'X':
        case 'Y':
        case 'Z':
            one(2);
            break;

        case 'M':
        case 'N':
        case 'W':
            three(0);
            break;
        }
    }

    cout << endl;

    for (int x = 0; x < y; x++)
    {
        char z = (char)toupper(word[x]);
        switch (z)
        {

        case 'A':
        case 'B':
        case 'D':
        case 'H':
        case 'M':
        case 'O':
        case 'U':
            two(0);
            break;

        case 'V':
        case 'X':
            two(1);
            break;

        case 'C':
        case 'E':
        case 'F':
        case 'L':
        case 'P':
            one(0);
            break;

        case 'G':
            three(2);
            break;

        case 'Q':
            two(2);
            break;

        case 'W':
            three(0);
            break;

        case 'I':
        case 'T':
        case 'Y':
            one(2);
            break;

        case 'J':
            two(4);
            break;

        case 'K':
            two(4);
            break;

        case 'N':
            three(2);
            break;

        case 'S':
            one(1);
            break;

        case 'R':
            two(2);
            break;

        case 'Z':
            one(3);
            break;
        }
    }

    cout << endl;

    for (int x = 0; x < y; x++)
    {
        char z = (char)toupper(word[x]);
        switch (z)
        {

        case 'A':
        case 'H':
        case 'K':
        case 'M':
        case 'N':
        case 'R':
        case 'X':
            two(0);
            break;

        case 'B':
            four(3);
            break;

        case 'C':
            three(1);
            break;

        case 'D':
            four(3);
            break;

        case 'E':
        case 'I':
        case 'L':
        case 'U':
        case 'Z':
            five();
            break;

        case 'F':
        case 'P':
            one(0);
            break;

        case 'G':
        case 'O':
        case 'S':
            three(1);
            break;

        case 'J':
            two(4);
            break;

        case 'Q':
            three(4);
            break;

        case 'T':
        case 'V':
        case 'Y':
            one(2);
            break;

        case 'W':
            two(1);
            break;
        }
    }

    return 0;
}