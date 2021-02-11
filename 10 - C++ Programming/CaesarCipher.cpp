// caesar cipher

/*

Caesar Cipher

Input format 

Enter a string(without spaces);
Enter a number(determines the degree to which the alphabets are to be rotated)

Sample case 

This_is_caesar_cipher
5

Output : Ymnx_nx_hfjxfw_hnumjw

*/

#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k)
{
    int i;
    char ch;
    if (k > 26)
    {
        k %= 26; // In case the degree of rotation is greater than total number of alphabets
    }
    for (i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (isalpha(ch))
        {
            // As the caesar cipher only rotates alphabets , anything else remains unencrypted
            if (islower(ch))
            {
                // if the character in the string is lower case(counting begins from 97 as 97 is the ascii code of a)
                if (ch - 96 + k <= 26)
                {
                    ch += k;
                }
                else
                {
                    ch -= 26;
                    ch += k;
                    // if adding ascii value jumps out of the alphabets we move bwckwards
                }
            }
            else
            {
                // character code of A is 65
                if (ch - 64 + k <= 26)
                {
                    ch += k;
                }
                else
                {
                    ch -= 26;
                    ch += k;
                }
            }
        }
        s[i] = ch;
    }
    return s;
}

int main()
{
    string s;
    cout << " Enter the string : ";
    cin >> s;
    cout << s << endl;
    // Reading the string
    int k;
    cout << "\n Enter the degree of rotation : ";
    cin >> k;
    cout << k << endl;
    // Reading the degree of rotation
    string result = caesarCipher(s, k);
    // calling the function
    cout << "\n The encrypted string is : " << result << endl;
    return 0;
}