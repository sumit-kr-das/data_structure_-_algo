    //          1
    //         / \
    //        2   3
    //       / \
    //    null  5
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

void preorder(Node* root) {
    if(root == NULL) {
        return;
    }
    cout<<root -> data<<" -> ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root -> left);
    cout<<root -> data<<" -> ";
    postorder(root -> right);
}

void inorder(Node* root) {
    if(root == NULL) {
        return ;
    }
    inorder(root -> left);
    inorder(root -> right);
    cout<<root -> data<<" -> ";
}

int main() {
    struct Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(5);
    cout<<"--------------- preorder ---------------"<<endl;
    preorder(root);
    cout<<endl<<"--------------- postorder ---------------"<<endl;
    postorder(root);
    cout<<endl<<"--------------- inorder ---------------"<<endl;
    inorder(root);
    return 0;
}