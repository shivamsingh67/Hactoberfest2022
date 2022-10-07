#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void print_nodes_at_subtree(node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    print_nodes_at_subtree(root->left, k - 1);
    print_nodes_at_subtree(root->right, k - 1);
}
int print_nodes_at_k(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        print_nodes_at_subtree(root, k);
        return 0;
    }
    int dl = print_nodes_at_k(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << endl;
        }
        else
        {
            print_nodes_at_subtree(root->right, k - dl - 2);
        }
        return dl + 1;
    }
    int dr = print_nodes_at_k(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << endl;
        }
        else
        {
            print_nodes_at_subtree(root->left, k - dl - 2);
        }
        return dr + 1;
    }
    return -1;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    node *t = root->left;
    print_nodes_at_k(root, t, 1);
    return 0;
}
