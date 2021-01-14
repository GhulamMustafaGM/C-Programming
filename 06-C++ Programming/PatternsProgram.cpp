// Patterns Program

#include <iostream>
    using namespace std;

void pattern1(int x)
{

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

void pattern2(int x)
{

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

void pattern3(int x)
{

    for (int i = 1; i <= x * 2; i += 2)
    {
        for (int j = 1; j <= i; j += 2)
            cout << j;
        cout << endl;
    }
}

void pattern4(int x)
{

    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= i; j++)
            if (j % 2 == 0)
                cout << '0';
            else
                cout << '1';
        cout << endl;
    }
}

void reversepattern1(int x)
{

    for (int i = x; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
            cout << j;
        cout << endl;
    }
}

void reversepattern2(int x)
{

    for (int i = x; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
            cout << i;
        cout << endl;
    }
}

void reversepattern3(int x)
{

    for (int i = x * 2 - 1; i >= 0; i -= 2)
    {
        for (int j = i; j >= 0; j -= 2)
            cout << j;
        cout << endl;
    }
}

void reversepattern4(int x)
{

    for (int i = x; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
            if (j % 2 == 0)
                cout << '1';
            else
                cout << '0';
        cout << endl;
    }
}

int main()
{

    int num = 0;
    cout << "insert a number" << endl;
    cin >> num;

    pattern4(num);
    reversepattern4(num);
    return 0;
}