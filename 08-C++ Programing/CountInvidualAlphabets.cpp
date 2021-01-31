// count individual alphabets

#include <iostream>
using namespace std;

int main()
{
    int t;
    string str;
    int alp[26];
    int i = 1;
    while (1)
    {
        for (int k = 0; k < 26; k++)
        {
            alp[k] = 0;
        }
        cin >> str;
        if (cin.fail())
            break;
        for (int j = 0; j < str.length(); j++)
        {
            alp[int(str[j]) - 97]++;
        }
        cout << "Case " << i++ << ":" << endl;
        for (int k = 0; k < 26; k++)
        {
            if (alp[k])
                cout << char(k + 97) << " " << alp[k] << endl;
        }
    }
    return 0;
}