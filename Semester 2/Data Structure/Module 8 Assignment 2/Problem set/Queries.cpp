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

void insert_at_head(node *&head, node *&tail, int value) 
{
    node *newnode = new node(value);
    if (head == NULL) 
    {
        head = newnode;
        tail = newnode;
    }
    else 
    {
        newnode->next = head;
        head = newnode;
    }
}

void insert_at_tail(node *&head, node *&tail, int value) 
{
    node *newnode = new node(value);
    if (head == NULL) 
    {
        head = newnode;
        tail = newnode;
    }
    else 
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void delete_at_head(node *&head, node *&tail) 
{
    if (head == NULL)
    {
        return;
    }

    node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_position(node *&head, node *&tail, int index) 
{
    if (head == NULL)
    {
        return;
    }

    if (index == 0) 
    {
        delete_at_head(head, tail);
        return;
    }

    node *temp = head;
    int count = 0;

    while (temp != NULL && count < index - 1) 
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    if (temp->next == NULL)
    {
        tail = temp;
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
    node *Head = NULL;
    node *Tail = NULL;

    int t;
    cin >> t;

    while (t--) 
    {
        int option, input;
        cin >> option >> input;

        if (option == 0) 
        {
            insert_at_head(Head, Tail, input);
        }
        else if (option == 1) 
        {
            insert_at_tail(Head, Tail, input);
        }
        else if (option == 2) 
        {
            delete_at_position(Head, Tail, input);
        }

        print_linked_list(Head);
    }

    return 0;
}
