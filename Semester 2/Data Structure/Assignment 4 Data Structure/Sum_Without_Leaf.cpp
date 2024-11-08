#include <iostream>
#include <queue>

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

Node *input_tree()
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
    }
    return root;
}

int sum_total(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = sum_total(root->left);
    int right = sum_total(root->right);
    return root->val + left + right;
}

int sum_leaf_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    }
    int l = sum_leaf_node(root->left);
    int r = sum_leaf_node(root->right);
    return l+r;
}

int sum_without_leaf_node(Node *root)
{
    return sum_total(root) - sum_leaf_node(root);
}

int main()
{
    Node *root = input_tree();
    cout << sum_without_leaf_node(root);
    return 0;
}