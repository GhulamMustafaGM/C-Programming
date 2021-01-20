// Garland words

#include <iostream>
#include <cstring>
using namespace std;

// We first want to see if there are any letters that appear more than once in the word.
bool checkFirstLetter(string word)
{
    bool state = false;
    char letter = word[0];
    for (unsigned i = 1; i < word.length() && !state; i++)
        if (word[i] == letter)
            state = true;
    return state;
}
/*  We use the start variable to search for the beginning of the substring that must be at the end of the Garland word. i.e: oni"on".
	increasing it in case that we don't find that substring. i.e: oni"o"on. But there's still a chance to find it later on. */
int garland_Degree(string word, bool &state, unsigned &start)
{
    unsigned degree = 0, length = word.length(), position = 0;
    bool exit = false;
    while (!state)
    {
        state = true;
        position = 0;
        for (unsigned i = start; i < length && !exit; i++)
        {
            if (word[i] == word[0])
            {
                position = i;
                exit = true;
            }
        }
        if (position == length - 1)
            return 1;
        else if (position == 0)
        { // This way we exit the loop in case there is no chance to find that substring.
            state = false;
            return 0;
        }
        else
        {
            exit = false;
            degree = 1;
            for (unsigned i = 1; i < length - position && state; i++)
            {
                if (word[i] == word[position + i])
                    degree++;
                else
                {
                    state = false;
                }
            }
            if (state == false)
            {
                start = position + 1;
            }
        }
    }
    return degree;
}

int main()
{
    string word;
    //cout << "Introduce the word to see if whether it is Garland or not: ";
    cin >> word;
    if (checkFirstLetter(word))
    {
        bool state = false;
        unsigned length = word.length() / 2;
        int degree = garland_Degree(word, state, length);
        if (state)
            cout << word << " is a Garland word and it's degree is: " << degree << "." << endl;
        else
            cout << word << " is not a Garland word." << endl;
    }
    else
        cout << word << " is not a Garland word." << endl;
    return 0;
}
