// Pointers programming

/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    string givenString;

    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    cout << " integer = \n";
    cin >> givenInt;

    cout << " float = \n";
    cin >> givenFloat;

    cout << " double = \n";
    cin >> givenDouble;

    cin.ignore();
    cout << "character = \n";
    cin >> givenChar;

    cout << "string = \n";
    cin.ignore();
    getline(cin, givenString);

    cout << "integer = " << givenInt << "\n";
    cout << "float = " << givenFloat << endl;
    cout << "double =" << givenDouble << endl;
    cout << "string = " << givenString << endl;
    cout << "character = " << (char)givenChar << endl
         << endl;

    cout << "address integer = " << &givenInt << "\n";
    cout << "address float = " << &givenFloat << "\n";
    cout << "address double = " << &givenDouble << "\n";
    cout << "address string = " << &givenString << "\n";
    std::cout << "address character = " << (void *)&givenChar << "\n\n";

    cout << "pointer of givenInt = " << *pointerGivenInt << "\n";
    cout << "pointer of pointer of givenInt = " << **pointerPointerGivenInt << "\n";

    return 0;
}

/* output 

 integer =
32
 float =
64.212
 double =
7.76545
character =
*
string =
Hey look at me! I know pointers!
integer = 32
float = 64.212
double =7.76545
string = Hey look at me! I know pointers!
character = *

address integer = 0x6afee8
address float = 0x6afee4
address double = 0x6afed8
address string = 0x6afed4
address character = 0x6afed3

pointer of givenInt = 32
pointer of pointer of givenInt = 32

*/