// dynamic implementation of stack

#include <iostream>
using namespace std;

typedef int element;

typedef struct cell
{
    element data;
    cell *next;
} * Stack;

Stack CreatStack()
{
    Stack s;
    s->next = NULL;

    return s;
}

int isEmptyStack(Stack s)
{

    return s == NULL;
}

int Push(Stack *s, element e)
{

    Stack q;
    q = (Stack *)malloc(sizeof(struct cell));

    q->data = e;
    q->next = s;

    s->next = q;

    return 1;
}

int Pop(Stack *s)
{
    Stack temp;

    if (isEmptyStack(*s))
    {
        return 0;
    }

    temp = *s;
    s = s->next;

    free(temp);

    return 1;
}

int Top(Stack s, element *e)
{

    if (isEmptyStack(s))
    {
        return 0;
    }

    *e = s->data;

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
