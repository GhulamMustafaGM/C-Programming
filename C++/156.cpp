#include <iostream>
using namespace std;

void f1();

int main()
{
    char str[] = "this is str in main()";

    cout << str << endl;

    f1();

    cout << str << endl;

    return 0;
}

void f1()
{
    char str[80];

    cout << "Ente rsomething: ";
    cin >> str;

    cout << str << endl;
}

/* 