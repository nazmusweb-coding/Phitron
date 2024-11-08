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

void insertAtTail(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void isPalindrome(Node* head, Node* tail)
{
    if (head == tail && head->val == tail->val)
    {
        cout << "YES" ;
        return;
    }

    bool flag = true;
    Node* temp_head = head;
    Node* temp_tail = tail;
    while (temp_head != temp_tail && 
           temp_head->prev != temp_tail && 
           temp_tail->next != temp_head)
    {
        if (temp_head->val != temp_tail->val)
        {
            flag = false;
            break;
        }
        temp_head = temp_head->next;
        temp_tail = temp_tail->prev;
    }
    if (flag)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    while (cin >> n && n != -1)
    {
        insertAtTail(head, tail, n);
    }

    isPalindrome(head, tail);
    
    return 0;
}