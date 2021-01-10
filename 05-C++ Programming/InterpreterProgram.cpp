// Interpreter program

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cstdio>

using namespace std;

void excute(vector<string> &src);

int main()
{
    vector<string> src;
    src.push_back("v @_       v");
    src.push_back(">0\"!dlroW\"v ");
    src.push_back("v  :#     < ");
    src.push_back(">\" ,olleH\" v");
    src.push_back("   ^       <");

    excute(src);

    system("pause");
}

enum DIRECTION
{
    LEFT,
    RIGHT,
    UP,
    DOWN
};

void movePointer(size_t *x, size_t *y, DIRECTION direction);

void excute(vector<string> &src)
{
    size_t x = 0, y = 0;
    DIRECTION movement = RIGHT;

    stack<char> befungeStack;

    while (true)
    {
        if (y >= src.size())
            y = 0;
        if (x >= src[y].size())
            x = 0;

        switch (src[y][x])
        {
        case '<':
            movement = LEFT;
            break;
        case '>':
            movement = RIGHT;
            break;
        case 'v':
            movement = DOWN;
            break;
        case '^':
            movement = UP;
            break;

        case '_':
            if (befungeStack.top() == 0)
                movement = RIGHT;
            else
                movement = LEFT;

            befungeStack.pop();
            break;

        case '|':
            if (befungeStack.top() == 0)
                movement = DOWN;
            else
                movement = UP;

            befungeStack.pop();
            break;

        case '?':
            movement = (DIRECTION)(rand() % 4);
            break;

        case '#': //Ignore the next command.
            movePointer(&x, &y, movement);
            break;

        case ' ':
            break;

        case '@':
            return;

        case '"':
            movePointer(&x, &y, movement);
            while (src[y][x] != '"')
            {
                befungeStack.push(src[y][x]);
                movePointer(&x, &y, movement);
            }
            break;

        case '~':
            befungeStack.push(getchar());
            break;

        case '.':
            cout << (int)befungeStack.top() << " " << flush;
            befungeStack.pop();
            break;

        case ',':
            cout << befungeStack.top() << flush;
            befungeStack.pop();
            break;

        case '+':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a + b;
        }
        break;
        case '-':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a - b;
        }
        break;
        case '*':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a * b;
        }
        break;
        case '/':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a / b; //Note division by zero.
        }
        break;
        case '%':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a % b;
        }
        break;
        case '`':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a > b;
        }
        break;
        case '!':
            befungeStack.top() = befungeStack.top() == 0;
            break;

        case ':':
            befungeStack.push(befungeStack.top());
            break;

        case '\\':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.top() = a;
            befungeStack.push(b);
        }
        break;

        case '$':
            befungeStack.pop();
            break;

        case 'g':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.pop();

            befungeStack.push(src[a][b]);
        }
        break;

        case 'p':
        {
            char a = befungeStack.top();
            befungeStack.pop();
            char b = befungeStack.top();
            befungeStack.pop();
            char v = befungeStack.top();
            befungeStack.pop();

            src[a][b] = v;
        }
        break;

        default:
            if ('0' <= src[y][x] && src[y][x] <= '9')
            {
                befungeStack.push(src[y][x] - '0');
                break;
            }
        }

        //Move
        movePointer(&x, &y, movement);
    }
}

void movePointer(size_t *x, size_t *y, DIRECTION direction)
{
    switch (direction)
    {
    case LEFT:
        --*x;
        break;
    case RIGHT:
        ++*x;
        break;
    case UP:
        --*y;
        break;
    case DOWN:
        ++*y;
        break;
    }
}