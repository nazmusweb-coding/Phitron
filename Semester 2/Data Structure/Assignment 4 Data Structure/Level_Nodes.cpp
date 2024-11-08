#include <iostream>
#include <queue>
#include <cmath>

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

int get_maximum_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_subtree = get_maximum_height(root->left);
    int right_subtree = get_maximum_height(root->right);
    return max(left_subtree, right_subtree) + 1;
}

void nodes(Node *root, int X, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == X)
    {
        cout << root->val << " ";
        return;
    }
    else
    {
        level++;
    }
    nodes(root->left, X, level);
    nodes(root->right, X, level);
    level = 0;
}

int main()
{
    Node *root = input_tree();
    int X, tree_maximum_height;
    cin >> X;

    tree_maximum_height = get_maximum_height(root)-1;

    if (X <= tree_maximum_height)
    {
        nodes(root, X, 0);
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}