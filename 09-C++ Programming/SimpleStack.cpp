
// Simple stack implemenation

#include <iostream>
#define maxim 100005
using namespace std;

class stack
{
    int top;

public:
    int arr[maxim];
    stack()
    {
        top = -1;
    }
    bool push(int element);
    int pop();
    bool isEmpty();
};
bool stack::push(int element)
{
    if (top >= maxim)
        return false;
    else
    {
        top++;
        arr[top] = element;
        return true;
    }
}
int stack::pop()
{
    if (top < 0)
        return 0;
    else
    {

        int item = arr[top];
        top--;
        return item;
    }
}
bool stack::isEmpty()
{
    if (top < 0)
        return true;
    else
        return false;
}

int main()
{
    stack st;
    st.push(67);
    st.push(55);
    st.push(23);
    st.push(12000);
    while (!st.isEmpty())
    {
        cout << st.pop() << endl;
    }
    return 0;
}