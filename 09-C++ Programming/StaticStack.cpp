// Static implementation of stack

#include <iostream>
using namespace std;

#define N 20

typedef int element;

typedef struct cell
{
    element data[N];
    int top;
} Stack;

Stack CreatStack()
{
    Stack s;
    s.top = -1;

    return s;
}

int isEmptyStack(Stack s)
{

    return s.top == -1;
}

int isFullStack(Stack s)
{

    return s.top == N - 1;
}

int Push(Stack *s, element e)
{

    if (isFullStack(*s))
    {
        return 0;
    }

    s->data[++(s->top)] = e;

    return 1;
}

int Pop(Stack *s)
{

    if (isEmptyStack(*s))
    {
        return 0;
    }

    s->top--;

    return 1;
}

int Top(Stack s, element *e)
{

    if (isEmptyStack(s))
    {
        return 0;
    }

    *e = s.data[s.top];

    return 1;
}

void ReadStack(Stack *s, int n)
{

    int i;
    element e;

    for (i = 0; i < n; i++)
    {
        cin >> e;
        if (!Push(s, e))
        {
            cout << "Stack is Full.\n\n";
        }
    }
    return;
}

void PrintStack(Stack s, int n)
{

    int i;
    element e;

    for (i = 0; i < n; i++)
    {

        if (!isEmptyStack(s))
        {
            Top(s, &e);
            Pop(&s);
            cout << "< " << e << " > ";
        }
    }

    return;
}

int main()
{
    int num;
    Stack s;

    s = CreatStack();

    cin >> num;

    ReadStack(&s, num);

    PrintStack(s, num);

    return 0;
}