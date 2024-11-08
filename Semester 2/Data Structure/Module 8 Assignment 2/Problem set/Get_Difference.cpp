#include <iostream>
#include <climits>

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
    node* next;
};

void insert_at_tail(node *&head, node *&tail, int value)
{
    node* newnode = new node(value);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;

        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void get_difference(node* head)
{
    int max = INT_MIN;
    int min = INT_MAX;
    node* temp = head;

    while(temp != NULL)
    {
        if (temp->value > max)
        {
            max = temp->value;
        }
        
        if (temp->value < min)
        {
            min = temp->value;
        }
        temp = temp->next;
    }

    if (max == INT_MIN || min == INT_MAX)
    {
        cout << 0 << endl;
        return;
    }

    cout << (max - min) << endl;
}

int main()
{
    node* Head = NULL;
    node* Tail = NULL;

    while(true)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }

        insert_at_tail(Head, Tail, x);
    }

    get_difference(Head);

    return 0;
}