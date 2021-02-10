// character cryptogram

#include <iostream>
using namespace std;

string input[1000];
string ch;

string text;
int key;
string mode;

int toInt(string str)
{
    int number = 0;
    for (int a = 0; a < str.length(); a++)
    {
        number *= 10;
        if (str[a] == '0')
        {
            number += 0;
        }
        if (str[a] == '1')
        {
            number += 1;
        }
        if (str[a] == '2')
        {
            number += 2;
        }
        if (str[a] == '3')
        {
            number += 3;
        }
        if (str[a] == '4')
        {
            number += 4;
        }
        if (str[a] == '5')
        {
            number += 5;
        }
        if (str[a] == '6')
        {
            number += 6;
        }
        if (str[a] == '7')
        {
            number += 7;
        }
        if (str[a] == '8')
        {
            number += 8;
        }
        if (str[a] == '9')
        {
            number += 9;
        }
    }

    return number;
}

string shift(string text, int key, string mode)
{
    int length = text.length();
    string newText = "";
    int appendCh = 0;

    if (mode == "decrypt")
    {
        key *= -1;
    }
    else if (mode != "encrypt")
    {
        newText = "Invalid mode! Modes are encrypt and decrypt.";
        length = 0;
    }

    for (int ch = 0; ch < length; ch++)
    {
        if (text[ch] == ' ')
        {
            newText += " ";
        }
        else
        {
            for (int testCh = 33; testCh < 256; testCh++)
            {
                if (char(testCh) == text[ch])
                {
                    appendCh = testCh + key;
                    while (appendCh < 33)
                    {
                        appendCh += 223;
                    }
                    while (appendCh > 255)
                    {
                        appendCh -= 223;
                    }
                    newText += char(appendCh);
                }
            }
        }
    }

    return newText;
}

int main()
{
    for (int a = 0; a < 1000; a++)
    {
        cin >> input[a];
    }

    for (int b = 0; b < 1000; b++)
    {
        ch = input[b];
        if (ch[0] != '1' && ch[0] != '2' && ch[0] != '3' && ch[0] != '4' && ch[0] != '5')
        {
            if (ch[0] != '6' && ch[0] != '7' && ch[0] != '8' && ch[0] != '9' && ch[0] != '0')
            {
                text += ch;
                text += " ";
            }
            else
            {
                key = toInt(ch);
                mode = input[b + 1];
                b = 1000;
            }
        }
        else
        {
            key = toInt(ch);
            mode = input[b + 1];
            b = 1000;
        }
    }

    cout << shift(text, key, mode);

    return 1;
}