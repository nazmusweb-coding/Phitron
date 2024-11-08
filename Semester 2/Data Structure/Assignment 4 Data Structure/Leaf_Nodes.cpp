#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree(vector<int> &nodes)
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
        if (!p->left && !p->right)
        {
            nodes.push_back(p->val);
        }
    }
    sort(nodes.begin(), nodes.end(), greater<int>()); 
    return root;
}

void get_leaf_nodes_descending_order(vector<int> nodes)
{
    for (int val : nodes)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int>leaf_nodes;
    Node *root = input_tree(leaf_nodes);
    get_leaf_nodes_descending_order(leaf_nodes);

    return 0;
}