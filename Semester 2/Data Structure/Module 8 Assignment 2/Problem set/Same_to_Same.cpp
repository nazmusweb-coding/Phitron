#include <iostream>

using namespace std;

class node
{
public:
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }

    int value;
    node *next;
};

void insert_at_tail(node *&head, int value)
{
    node *newnode = new node(value);
    if(head == NULL)
    {
        head = newnode;

        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void isSame(node *first_head, node *second_head)
{
    node* first_temp = first_head;
    node* second_temp = second_head;

    while (first_temp != NULL && second_temp != NULL)
    {
        if (first_temp->value != second_temp->value)
        {
            cout << "NO" << endl;
            return;
        }

        first_temp = first_temp->next;
        second_temp = second_temp->next;
    }

    if (first_temp == NULL && second_temp == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    node *first_Head = NULL;
    node *second_Head = NULL;

    int  x;

    while (true)
    {
        cin >> x;
        
        if (x == -1)
        {
            break;
        }

        insert_at_tail(first_Head, x);
    }

    while (true)
    {
        cin >> x;
        
        if (x == -1)
        {
            break;
        }

        insert_at_tail(second_Head, x);
    }
    
    isSame(first_Head, second_Head);

    return 0;
}