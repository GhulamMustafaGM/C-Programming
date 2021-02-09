// string balance

#include <iostream>
using namespace std;

//Enter a string
// Enter whose balance you want ex:- { or ) or [

int main()
{
    int i, j, l;
    i = j = l = 0;
    string a;
    char ch[3];
    ch[2] = '\\';
    cout << "Enter a string: ";
    getline(cin, a);
    cout << a;
    cout << "\nEnter choice: ";
    cin >> ch[0];
    switch (ch[0])
    {
    case '(':
        ch[1] = ')';
        cout << ch[0] << " " << ch[1];
        break;
    case '[':
        ch[1] = ']';
        cout << ch[0] << " " << ch[1];
        break;
    case '{':
        ch[1] = '}';
        cout << ch[0] << " " << ch[1];
        break;
    case ')':
        ch[1] = '(';
        cout << ch[1] << " " << ch[0];
        break;
    case '}':
        ch[1] = '{';
        cout << ch[1] << " " << ch[0];
        break;
    case ']':
        ch[1] = '[';
        cout << ch[1] << " " << ch[0];
        break;
    default:
        cout << "wrong choice";
        j--;
    }
    for (int k = 0; a[k] != '\0'; k++)
    {
        if (a[k] == ch[0])
        {
            i++;
        }
        if (a[k] == ch[1])
        {
            j++;
        }
        if (a[k] == ch[2] && j >= 0)
        {
            l++;
        }
    }
    if (i != j)
    {
        if (i > j)
        {
            j = j + l;
            l = 0;
        }
        else
        {
            i = i + l;
            l = 0;
        }
    }
    if (i == j && l == 0)
    {
        cout << "\nBalanced string";
    }
    else
    {
        if (j >= 0)
        {
            cout << "\nUnbalanced string";
        }
    }
    return 0;
}
