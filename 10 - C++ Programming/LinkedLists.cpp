// linked lists

#include <iostream>
using namespace std;

class Linked_List
{
private:
    struct node
    {
        int data;
        node *next;
    };
    node *head;
    node *temp;
    node *curr;

public:
    Linked_List()
    {
        head = nullptr;
        temp = nullptr;
        curr = nullptr;
    }

    void Addnode(int addData)
    {
        node *n = new node;
        n->data = addData;
        n->next = nullptr;

        if (head != nullptr)
        {
            curr = head;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = n;
        }

        else
        {
            head = n;
        }
    }

    void Delnode(int delData)
    {
        node *delptr = nullptr;

        temp = head;
        curr = head;
        while (curr != nullptr && curr->data != delData)
        {
            temp = curr;
            curr = curr->next;
        }
        if (curr == nullptr)
        {
            cout << delData << " was not in the list \n";
            delete delptr;
        }
        else
        {
            delptr = curr;
            curr = curr->next;
            temp->next = curr;
            if (delptr == head)
            {
                head = head->next;
                temp = nullptr;
            }
            delete delptr;
            cout << delData << " was deleted \n";
        }
    }

    void PrintList()
    {
        curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << endl;
            curr = curr->next;
        }
    }
};
int main()
{
    Linked_List list;
    list.Addnode(74);
    list.Addnode(5);
    list.Addnode(75);
    list.Addnode(-4);
    list.Addnode(750);
    list.PrintList();
    list.Delnode(75);
    list.Delnode(750);
    list.Delnode(74);
    list.Delnode(8);
    cout << "\n";
    list.PrintList();

    return 0;
}
