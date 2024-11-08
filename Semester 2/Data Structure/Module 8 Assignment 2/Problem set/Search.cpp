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

void search(node *head, int key)
{
    int count = 0;
    bool flag = false;
    node* temp = head;

    while (temp != NULL)
    {
        if (key == temp->value)
        {
            flag = true;
            break;
        }

        count++;
        temp = temp->next;
    }

    if (flag)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    node* Head = NULL;
    node* Tail = NULL;

    int t, x;
    cin >> t;

    while (t--)
    {
        while (true)
        {
            cin >> x;
            
            if (x == -1)
            {
                break;
            }

            insert_at_tail(Head, Tail, x);
        }

        cin >> x;
        search(Head, x);

        Head = Tail = NULL;
    }

    return 0;
}