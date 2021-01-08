// Number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// enter a number between 1 & 5!!

int main()
{

    srand(time(0));
    int bot = (rand() % 5) + 1;

    int k;
    cin >> k;

    if (k == bot)
    {

        cout << "Impressive!" << endl;
    }

    else
    {
        cout << "Guess again.." << endl;
    }

    cout << endl;

    cout << "you guessed: ";

    cout << k << endl;

    cout << "The computer generated: ";
    cout << bot << endl;

    cout << endl;

    while (bot == k)
    {
        score = score + 10;
    }
    cout << "Your score is: " << score;

    return 0;
}

/* output

*/

//  word AI

#include <iostream>
#include <string>
using namespace std;

struct CharNode
{
    char curr;
    int times;
    CharNode *next[29];

    CharNode(char c = '-') : curr(c), times(1)
    {
        for (int i = 0; i < 29; i++)
            next[i] = nullptr;
    }
    CharNode &operator[](char c)
    {
        unsigned short i = c - 'a' + 1;
        if (next[i] == nullptr)
            next[i] = new CharNode(c);
        return *(next[i]);
    }

    inline bool has_child(char c)
    {
        return next[c - 'a' + 1] != nullptr;
    }

    bool has_childs()
    {
        for (int i = 1; i < 29; i++)
            if (next[i] != nullptr)
                return true;
        return false;
    }
    inline bool is_end()
    {
        return next[0] != nullptr;
    }

    inline void set_end()
    {
        next[0] = new CharNode();
    }

    string get_longest_sequence(string prev = "")
    {
        string temp, result = prev;

        if (has_childs())
            for (int i = 1; i < 29; i++)
                if (next[i] != nullptr)
                {
                    temp = next[i]->get_longest_sequence(prev);
                    if (result.size() < temp.size())
                        result = temp;
                }

        return curr + result;
    }

    pair<string, int> get_often_sequence(pair<string, int> prev = {"", 0})
    {
        pair<string, int> temp, result = prev;

        if (has_childs())
            for (int i = 1; i < 29; i++)
                if (next[i] != nullptr)
                {
                    temp = next[i]->get_often_sequence(prev);
                    if (result.second < temp.second)
                        result = temp;
                }

        return {curr + result.first, times};
    }
};

class WordAI
{
    CharNode data;

public:
    void learn(string word)
    {
        CharNode *iter = &data;

        for (int i = 0; i < word.size(); i++)
        {
            iter = &((*iter)[word[i]]);
            iter->times++;
        }
        iter->set_end();

        cout << "learned '" + word + "'\n";
    }

    bool known_word(string word)
    {
        CharNode *iter = &data;

        for (int i = 0; i < word.size(); i++)
            if (!iter->has_child(word[i]))
                return false;
            else
                iter = &((*iter)[word[i]]);

        return iter->is_end();
    }

    string predict(string word_begin)
    {
        string result = word_begin;
        result.erase(result.size() - 1);
        CharNode *iter = &data;

        for (int i = 0; i < word_begin.size(); i++)
            if (iter->has_child(word_begin[i]))
                iter = &((*iter)[word_begin[i]]);
            else
                return word_begin; // not found

        return result + iter->get_often_sequence().first;
    }
};

int main()
{
    WordAI ai;
    ai.learn("hello");
    ai.learn("hell");
    ai.learn("hello");
    ai.learn("helicopter");
    cout << "predicting for 'he': ";
    cout << ai.predict("he");
    return 0;
}