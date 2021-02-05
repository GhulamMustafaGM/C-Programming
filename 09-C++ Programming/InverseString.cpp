// inverse string

#include <iostream>
#include <string.h>
    using namespace std;

int main()
{
    char arr[99];
    int i = 0;

    cout << "Type a string: ";
    cin.getline(arr, 99); //Save the string in arr
    i = strlen(arr);      //Get the numbers of the letters in the arr
    for (int j = 0; j < i; j++)
    {
        cout << arr[j];
    }
    cout << endl
         << "The string inverse is: ";
    while (i > 0)
    {
        i--;
        cout << arr[i];
    }
}