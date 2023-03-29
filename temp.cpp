#include <iostream>
#include <queue>
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
        cout << "Enter the data for root node: " << endl;
        int data;
        cin >> data;

        root = new node(data); // create a new node

        if (data == -1)
        {
            return NULL;
        }

        cout << "Enter data for left node: " <<root->data<< endl;
        root->left = buildTree(root->left);
        // (*root).left = buildTree((*root).left)

        cout << "Enter data for right node: " <<root->data<< endl;
        root->right = buildTree(root->right);

        return root;
    }
    void levelOrderTraversal(node *root)
    {
        queue<node *> sk;
        sk.push(root);

        while (!sk.empty())
        {
            node *temp = sk.front();
            cout << temp->data << " ";
            sk.pop();
            // if left not null if(temp -> left != NULL)
            if (temp->left)
            {
                sk.push(temp->left);
            }

            if (temp->right)
            {
                sk.push(temp->right);
            }
        }
    }
};

int main()
{
    node *root = NULL;
    Tree *obj = new Tree();
    root = obj->buildTree(root);
    obj->levelOrderTraversal(root);
    return 0;
}