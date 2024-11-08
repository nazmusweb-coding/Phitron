#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Node
{
public:
    string val;
    Node* prev;
    Node* next;

    Node(string data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(Node* &head, string val)
{
    Node* new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    temp = new_node;
}

void visitAddress(Node* head, string val, Node* &current)
{
    bool flag = true;
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            current = temp;
            flag = false;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (flag)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << val << endl;
    }
}

void nextAddress(Node* &current)
{
    if (current->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->next;
        cout <<  current->val << endl;
    }
}

void prevAddress(Node* &current)
{
    if (current->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->prev;
        cout << current->val << endl;
    }
}

int main()
{
    Node* head = NULL;
    Node* current = NULL;
    string val;

    while (cin >> val && val != "end")
    {
        insertAtTail(head, val);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    while(Q--)
    {
        getline(cin, val);
        stringstream ss(val);
        ss >> val;
        if (val == "visit")
        {
            ss >> val;
            visitAddress(head, val, current);
        }
        else if (val == "next")
        {
            nextAddress(current);
        }
        else if (val == "prev")
        {
            prevAddress(current); 
        }
    }
    
    return 0;
}