#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
public:
    node *buildTree(node *root)
    {
        cout << "Enter a value for root node: " << endl;
        int data;
        cin >> data;
        root = new node(data);

        if (data == -1)
        {
            return NULL;
        }

        cout << "Enter data for left node: " << endl;
        root->left = buildTree(root->left);

        cout << "Enter data for right node: " << endl;
        root->right = buildTree(root->right);

        return root;
    }

    // inorder traversal
    void postTraversal(node *root)
    {
        if (root == NULL)
        {
            return;
        }

        postTraversal(root->left);
        postTraversal(root->right);
        cout << root->data << " ";
    }
};

int main()
{
    node *root = NULL;
    Tree *obj = new Tree();
    root = obj->buildTree(root);
    obj->postTraversal(root);
    return 0;
}