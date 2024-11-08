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
    if (head == NULL) 
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

void remove_duplicate(node *&head)
{
    node *temp = head;
    while (temp != NULL) 
    {
        node *current = temp;
        while (current->next != NULL)
        {
            if (temp->value == current->next->value)
            {
                node *deleteNode = current->next;
                current->next = current->next->next;
                delete deleteNode;
            }
            else
            {
                current = current->next;
            }
        }
        temp = temp->next;
    }
}

void print_linked_list(node *head) 
{
    node *temp = head;
    while (temp != NULL) 
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node* Head = NULL;

    while (true)
    {
        int x;
        cin >> x;
        
        if (x == -1)
        {
            break;
        }

        insert_at_tail(Head, x);
    }

    remove_duplicate(Head);
    print_linked_list(Head);

    return 0;
}