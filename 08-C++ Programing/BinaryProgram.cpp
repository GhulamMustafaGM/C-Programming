// Morse or Binary Program 

#include <iostream>
#define RUN_SUCCESS 0
#define pass (void)0
using namespace std;

int main()
{
    std::string charInput;
    std::string method;
    std::cout << "What do you want to encode your text into? Morse or Binary?" << endl;
    std::cin >> method;
    std::cin.ignore();

    if (method == "Morse" || method == "morse")
    {
        // -- Take sentence as input -- //
        std::cout << "Input your data to be encoded: ";
        getline(cin, charInput);
        std::cin.ignore();
        std::cout << charInput << endl
                  << endl;
        // -- | -- //
        std::cout << "Encoded Output:" << endl;
        for (int j = 0; j < charInput.length(); j++)
        {
            switch (charInput[j])
            {
                // Alphabetical upper -> lower
            case 'A':
            {
                std::cout << ".- ";
                break;
            }

            case 'a':
            {
                std::cout << ".- ";
                break;
            }

            case 'B':
            {
                std::cout << "-... ";
                break;
            }

            case 'b':
            {
                std::cout << "-... ";
                break;
            }

            case 'C':
            {
                std::cout << "-.-. ";
                break;
            }

            case 'c':
            {
                std::cout << "-.-. ";
                break;
            }

            case 'D':
            {
                std::cout << "-.. ";
                break;
            }

            case 'd':
            {
                std::cout << "-.. ";
                break;
            }

            case 'E':
            {
                std::cout << ". ";
                break;
            }

            case 'e':
            {
                std::cout << ". ";
                break;
            }

            case 'F':
            {
                std::cout << "..-. ";
                break;
            }

            case 'f':
            {
                std::cout << "..-. ";
                break;
            }

            case 'G':
            {
                std::cout << "--. ";
                break;
            }

            case 'g':
            {
                std::cout << "--. ";
                break;
            }

            case 'H':
            {
                std::cout << ".... ";
                break;
            }

            case 'h':
            {
                std::cout << ".... ";
                break;
            }

            case 'I':
            {
                std::cout << ".. ";
                break;
            }

            case 'i':
            {
                std::cout << ".. ";
                break;
            }

            case 'J':
            {
                std::cout << ".--- ";
                break;
            }

            case 'j':
            {
                std::cout << ".--- ";
                break;
            }

            case 'K':
            {
                std::cout << "-.- ";
                break;
            }

            case 'k':
            {
                std::cout << "-.- ";
                break;
            }

            case 'L':
            {
                std::cout << ".-.. ";
                break;
            }

            case 'l':
            {
                std::cout << ".-.. ";
                break;
            }

            case 'M':
            {
                std::cout << "-- ";
                break;
            }

            case 'm':
            {
                std::cout << "-- ";
                break;
            }

            case 'N':
            {
                std::cout << "-. ";
                break;
            }

            case 'n':
            {
                std::cout << "-. ";
                break;
            }

            case 'O':
            {
                std::cout << "--- ";
                break;
            }

            case 'o':
            {
                std::cout << "--- ";
                break;
            }

            case 'P':
            {
                std::cout << ".--. ";
                break;
            }

            case 'p':
            {
                std::cout << ".--. ";
                break;
            }

            case 'Q':
            {
                std::cout << "--.- ";
                break;
            }

            case 'q':
            {
                std::cout << "--.- ";
                break;
            }

            case 'R':
            {
                std::cout << ".-. ";
                break;
            }

            case 'r':
            {
                std::cout << ".-. ";
                break;
            }

            case 'S':
            {
                std::cout << "... ";
                break;
            }

            case 's':
            {
                std::cout << "... ";
                break;
            }

            case 'T':
            {
                std::cout << "- ";
                break;
            }

            case 't':
            {
                std::cout << "- ";
                break;
            }

            case 'U':
            {
                std::cout << "..- ";
                break;
            }

            case 'u':
            {
                std::cout << "..- ";
                break;
            }

            case 'V':
            {
                std::cout << "...- ";
                break;
            }

            case 'v':
            {
                std::cout << "...- ";
                break;
            }

            case 'W':
            {
                std::cout << ".-- ";
                break;
            }

            case 'w':
            {
                std::cout << ".-- ";
                break;
            }

            case 'X':
            {
                std::cout << "-..- ";
                break;
            }

            case 'x':
            {
                std::cout << "-..- ";
                break;
            }

            case 'Y':
            {
                std::cout << "-.-- ";
                break;
            }

            case 'y':
            {
                std::cout << "-.-- ";
                break;
            }

            case 'Z':
            {
                std::cout << "--.. ";
                break;
            }

            case 'z':
            {
                std::cout << "--.. ";
                break;
            }

                // Integer input
            case '0':
            {
                std::cout << "----- ";
                break;
            }

            case '1':
            {
                std::cout << ".---- ";
                break;
            }

            case '2':
            {
                std::cout << "..--- ";
                break;
            }

            case '3':
            {
                std::cout << "...-- ";
                break;
            }

            case '4':
            {
                std::cout << "....- ";
                break;
            }

            case '5':
            {
                std::cout << "..... ";
                break;
            }

            case '6':
            {
                std::cout << "-.... ";
                break;
            }

            case '7':
            {
                std::cout << "--... ";
                break;
            }

            case '8':
            {
                std::cout << "---.. ";
                break;
            }

            case '9':
            {
                std::cout << "----. ";
                break;
            }
            }
        }
    }
    else
    {
        if (method == "binary" || method == "Binary")
        {
            std::cout << "Input the your data to be encoded: ";
            getline(cin, charInput);
            cin.ignore();
            std::cout << charInput << endl
                      << endl;
            std::cout << "Encoded Output: " << endl;
            for (int k; k < charInput.length(); k++)
            {
                switch (charInput[k])
                {
                    // Alphabetical Upper -> lower
                case 'A':
                {
                    std::cout << "01000001 ";
                    break;
                }

                case 'a':
                {
                    std::cout << "01100001 ";
                    break;
                }

                case 'B':
                {
                    std::cout << "01000010 ";
                    break;
                }

                case 'b':
                {
                    std::cout << "01100010 ";
                    break;
                }

                case 'C':
                {
                    std::cout << "01000011 ";
                    break;
                }

                case 'c':
                {
                    std::cout << "01100011 ";
                    break;
                }

                case 'D':
                {
                    std::cout << "01000100 ";
                    break;
                }

                case 'd':
                {
                    std::cout << "01100100 ";
                    break;
                }

                case 'E':
                {
                    std::cout << "01000101 ";
                    break;
                }

                case 'e':
                {
                    std::cout << "01100101 ";
                    break;
                }

                case 'F':
                {
                    std::cout << "01000110 ";
                    break;
                }

                case 'f':
                {
                    std::cout << "01100110 ";
                    break;
                }

                case 'G':
                {
                    std::cout << "01000111 ";
                    break;
                }

                case 'g':
                {
                    std::cout << "01100111 ";
                    break;
                }

                case 'H':
                {
                    std::cout << "01001000 ";
                    break;
                }

                case 'h':
                {
                    std::cout << "01101000 ";
                    break;
                }

                case 'I':
                {
                    std::cout << "01001001 ";
                    break;
                }

                case 'i':
                {
                    std::cout << "01101001 ";
                    break;
                }

                case 'J':
                {
                    std::cout << "01001010 ";
                    break;
                }

                case 'j':
                {
                    std::cout << "01101010 ";
                    break;
                }

                case 'K':
                {
                    std::cout << "01001011 ";
                    break;
                }

                case 'k':
                {
                    std::cout << "01101011 ";
                    break;
                }

                case 'L':
                {
                    std::cout << "01001100 ";
                    break;
                }

                case 'l':
                {
                    std::cout << "01101100 ";
                    break;
                }

                case 'M':
                {
                    std::cout << "01001101 ";
                    break;
                }

                case 'm':
                {
                    std::cout << "01101101 ";
                    break;
                }

                case 'N':
                {
                    std::cout << "01001110 ";
                    break;
                }

                case 'n':
                {
                    std::cout << "01101110 ";
                    break;
                }

                case 'O':
                {
                    std::cout << "01001111 ";
                    break;
                }

                case 'o':
                {
                    std::cout << "01101111 ";
                    break;
                }

                case 'P':
                {
                    std::cout << "01010000 ";
                    break;
                }

                case 'p':
                {
                    std::cout << "01100000 ";
                    break;
                }

                case 'Q':
                {
                    std::cout << "01010001 ";
                    break;
                }

                case 'q':
                {
                    std::cout << "01110001 ";
                    break;
                }

                case 'R':
                {
                    std::cout << "01010010 ";
                    break;
                }

                case 'r':
                {
                    std::cout << "01110010 ";
                    break;
                }

                case 'S':
                {
                    std::cout << "01010011 ";
                    break;
                }

                case 's':
                {
                    std::cout << "01110011 ";
                    break;
                }

                case 'T':
                {
                    std::cout << "01010100 ";
                    break;
                }

                case 't':
                {
                    std::cout << "01110100 ";
                    break;
                }

                case 'U':
                {
                    std::cout << "01010101 ";
                    break;
                }

                case 'u':
                {
                    std::cout << "01110101 ";
                    break;
                }

                case 'V':
                {
                    std::cout << "01010110 ";
                    break;
                }

                case 'v':
                {
                    std::cout << "01110110 ";
                    break;
                }

                case 'W':
                {
                    std::cout << "01010111 ";
                    break;
                }

                case 'w':
                {
                    std::cout << "01110111 ";
                    break;
                }

                case 'X':
                {
                    std::cout << "01011000 ";
                    break;
                }

                case 'x':
                {
                    std::cout << "01111000 ";
                    break;
                }

                case 'Y':
                {
                    std::cout << "01011001 ";
                    break;
                }

                case 'y':
                {
                    std::cout << "01111001 ";
                    break;
                }

                case 'Z':
                {
                    std::cout << "01011010 ";
                    break;
                }

                case 'z':
                {
                    std::cout << "01111010 ";
                    break;
                }

                    // Integer Input
                case '0':
                {
                    std::cout << "00110000 ";
                    break;
                }

                case '1':
                {
                    std::cout << "00110001 ";
                    break;
                }

                case '2':
                {
                    std::cout << "00110010 ";
                    break;
                }

                case '3':
                {
                    std::cout << "00110011 ";
                    break;
                }

                case '4':
                {
                    std::cout << "00110100 ";
                    break;
                }

                case '5':
                {
                    std::cout << "00110101 ";
                    break;
                }

                case '6':
                {
                    std::cout << "00110110 ";
                    break;
                }

                case '7':
                {
                    std::cout << "00110111 ";
                    break;
                }

                case '8':
                {
                    std::cout << "00111000 ";
                    break;
                }

                case '9':
                {
                    std::cout << "00111001 ";
                    break;
                }
                }
            }
        }
    }
    return RUN_SUCCESS;
}