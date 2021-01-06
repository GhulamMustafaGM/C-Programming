
#include <iostream>
#include <cstring>
#define SIZE 20
#include <climits>
//using namespace std;
//input your name

using std::cin;
using std::cout;
int main()
{

    char name1[SIZE];
    cin >> name1;
    cout << "Hello " << name1 << ".\n";
    cout << "I am david, nice to meet you at learning platform.\n";
    cout << "Your name has " << strlen(name1)
         << " letters and is stored in an array of " << sizeof(name1) << " bytes.\n";

    char dog[] = {'b', 'c', 'x'};       //not a string
    char cat[] = {'c', 'a', 't', '\0'}; //a string
    char fish[] = "fish";               //string
    cout << "char_bit = " << CHAR_BIT << "\n";
    cout << "char_max = " << CHAR_MAX << "\n";
    return 0;
}