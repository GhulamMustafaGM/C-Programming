// Struct 

#include <iostream>
#include <cstring>
using namespace std;
int c_in_str(const char *str, char ch, int len);

/*
*    input like this:
*    ghhhy h
*    then you can get num of 'h' in string    *    "ghhhy"
*
*/
int main()
{
    char temp[80];
    cin.getline(temp, 80);
    int len = strlen(temp);
    char *str = new char[len + 1];
    strcpy(str, temp);
    c_in_str(str, temp[len - 1], len);
    delete[] str;
    return 0;
}

int c_in_str(const char *str, char ch, int len)
{
    int count = 0;
    char *str_temp = new char[len - 1];
    while (' ' != *str)
    {
        *str_temp = *str;
        if (*str == ch)
            count++;
        *str++;
        *str_temp++;
    }
    *str_temp = '\0';
    cout << "input string: " << str_temp - len + 1 << endl;
    cout << "input char: " << *(str + 1) << endl;

    cout << "num of char " << *(str + 1) << ": " << count;
    return 0;
    delete[] str_temp;
}