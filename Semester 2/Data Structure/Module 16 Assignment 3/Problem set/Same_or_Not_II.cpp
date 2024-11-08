#include <iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node *next;
        Node *prev;

        Node (int value)
        {
            this->val = value;
            this->next = NULL;
            this->prev = NULL;
        }
};

class Stack
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;

        void push(int val)
        {
            size++;
            Node *new_node = new Node(val);
            if (head == NULL)
            {
                head = new_node;
                tail = new_node;
                return;
            }
            new_node->prev = tail;
            tail->next = new_node;
            tail = tail->next;
        }
        void pop()
        {
            size--;
            Node *delete_node = tail;
            tail = tail->prev;
            if (tail == NULL)
            {
                head = NULL;
                delete delete_node;
                return;
            }

            tail->next = NULL;
            delete delete_node;
        }

        int top()
        {
            return tail->val;
        }

        int get_size()
        {
            return size;
        }

        bool empty()
        {
            if (size == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

class Queue
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;

        void push(int val)
        {
            size++;
            Node *new_node = new Node(val);
            if (head == NULL)
            {
                head = new_node;
                tail = new_node;
                return;
            }

            tail->next = new_node;
            new_node->prev = tail;
            tail = tail->next;
        }

        void pop()
        {
            size--;
            Node *delete_node = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
                delete delete_node;
                return;
            }

            head->prev = NULL;
            delete delete_node;
        }

        int front()
        {
            return head->val;
        }

        int get_size()
        {
            return size;
        }

        bool empty()
        {
            if (size == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

void is_Same(Stack s, Queue q)
{
    int size = s.get_size();
    bool flag = true;

    for (int i = 0; i < size; i++)
    {
        if (s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}

int main()
{
    Stack ST;
    Queue QU;
    int m, n, x;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        ST.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        QU.push(x);
    }
    
    if (m != n)
    {
        cout << "NO" ;
    }
    else
    {
        is_Same(ST, QU);
    }

    return 0;
}