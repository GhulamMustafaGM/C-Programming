// Name generator

// Update - Tunned the code so that output looks more simple and readable.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string put;
    int x;

    cout << "L33T NAME GENERATOR" << endl
         << endl;
    cout << "_____________________________________________" << endl;
    cout << "L33T names are commonly used by hackers/gamers \n ";

    cout << "________________________________________" << endl;

    cin >> put;
    cout << "Enter your Name:- " << put << "." << endl;

    cout << "_____________________________________________" << endl;

    cout << " Your L33T name is :-" << endl;
    x = put.length();

    for (int b = 0; b < x; b++)
    {

        switch (put[b])
        {

        case 'a':
        case 'A':
            cout << "4";
            break;

        case 'b':
        case 'B':
            cout << "b";
            break;

        case 'c':
        case 'C':
            cout << "(";
            break;

        case 'd':
        case 'D':
            cout << "d";
            break;

        case 'e':
        case 'E':
            cout << "3";
            break;

        case 'f':
        case 'F':
            cout << "f";
            break;

        case 'g':
        case 'G':
            cout << "9";
            break;

        case 'h':
        case 'H':
            cout << "h";
            break;

        case 'i':
        case 'I':
            cout << "1";
            break;

        case 'j':
        case 'J':
            cout << "j";
            break;

        case 'k':
        case 'K':
            cout << "k";
            break;

        case 'l':
        case 'L':
            cout << "|";
            break;

        case 'm':
        case 'M':
            cout << "m";
            break;

        case 'n':
        case 'N':
            cout << "n";
            break;

        case 'o':
        case 'O':
            cout << "0";
            break;

        case 'p':
        case 'P':
            cout << "p";
            break;

        case 'q':
        case 'Q':
            cout << "?";
            break;

        case 'r':
        case 'R':
            cout << "r";
            break;

        case 's':
        case 'S':
            cout << "5";
            break;

        case 't':
        case 'T':
            cout << "7";
            break;

        case 'u':
        case 'U':
            cout << "u";
            break;

        case 'v':
        case 'V':
            cout << "v";
            break;

        case 'w':
        case 'W':
            cout << "w";
            break;

        case 'x':
        case 'X':
            cout << "x";
            break;

        case 'y':
        case 'Y':
            cout << "y";
            break;

        case 'z':
        case 'Z':
            cout << "z";
            break;

        case '.':
            cout << "----..----\n\n"
                 << endl;
            break;
        }
    }
    cout << "\n_____________________________________________" << endl
         << endl;
    cout << "Your Name Length Is:- " << x << endl;
    cout << "_____________________________________________" << endl
         << endl;
    cout << "If You Like It!!! Please Hit Like:----" << endl;
    cout << "_____________________________________________" << endl
         << endl;
    cout << "Thank's For Testing. This is my first code :). Thanks for shekhar chauhan (I used his codes to troubleshoot me)" << endl
         << endl;
    cout << "_____________________________________________" << endl
         << endl;
    cout << "App by-'KayDee''" << endl
         << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
}