// This code almost killed me :)
#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

void displayLeftToRight(Node* head, Node* &tail)
{
    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            tail = temp;
        }
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayRightToLeft(Node* tail)
{
    Node* temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int val)
{
    Node* new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insertAtPosition(Node* &head, Node* &tail, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        displayLeftToRight(head, tail);
        displayRightToLeft(tail);
        return;
    }
    
    int current_node = 0;
    Node* temp = head;
    while (current_node != pos-1 && temp != NULL)
    {
        temp = temp->next;
        current_node++;
    }

    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node* new_node = new Node(val);
    if (temp->next == NULL)
    {
        temp->next = new_node;
        new_node->prev = temp;
    }
    else
    {
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
        new_node->prev = temp;
    }
    displayLeftToRight(head, tail);
    displayRightToLeft(tail);
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL; // just for help in displayrighttoleft
    int Q, X, V;
    cin >> Q;

    while (Q--)
    {
        cin >> X >> V;

        if (head == NULL && X != 0 )
        {
            cout << "Invalid" << endl;
            continue;
        }
        
        insertAtPosition(head, tail, V, X);
    }
    
    return 0;
}