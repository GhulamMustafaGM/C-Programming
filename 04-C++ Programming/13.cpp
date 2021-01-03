// Stack structure

#include <iostream>
using namespace std;

int s[10];
int t[10];
int top = 0, a = 0;
void push(int x)
{
    if (top < 10)
    {
        top++;
        s[top] = x;
        return;
    }
}
void pop()
{
    if (top > 0)
    {
        t[a++] = s[top];
        top--;
    }
}
void clear()
{
    top = 0;
    return;
}
int main()
{
    push(1);
    push(2);
    pop();
    push(3);
    pop();
    pop();
    for (int i = 0; i < 3; i++)
    {
        cout << t[i] << ",";
    }

    return 0;
}