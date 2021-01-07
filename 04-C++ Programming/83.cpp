// cin char

#include <iostream>
using namespace std;

// Three ways to get char

void cin_common();
void my_get();
void my_get2();

int main()
{
    //cin_common();
    //my_get();
    my_get2();
    return 0;
}

//Problem1:cant get space, tab and enter

void cin_common()
{
    char in_char;
    cin >> in_char;
    int count = 0;
    while (in_char != '#')
    {
        cout << in_char;
        count++;
        cin >> in_char;
    }
}
//solve problem1
void my_get()
{
    char in_char;
    cin.get(in_char);
    int count = 0;
    while (in_char != '#')
    {
        cout << in_char;
        count++;
        cin.get(in_char);
    }
}

//solve problem1
void my_get2()
{
    char in_char;
    in_char = cin.get();
    int count = 0;
    while (in_char != '#')
    {
        cout << in_char;
        count++;
        in_char = cin.get();
    }
}