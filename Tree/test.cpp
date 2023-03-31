#include <iostream>
#include <queue>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Tree {
    public:
        node* buildTree(node* root) {
            cout<<"Enter the data for root node: "<<endl;
            int data;
            cin>>data;
            root = new node(data);

            if(data == -1){ 
                return NULL;
            }

            cout<<"Enter data for left node: "<<endl;
            root -> left = buildTree(root -> left);
            
            cout<<"Enter data for right node: "<<endl;
            root -> right = buildTree(root -> right);

            return root;
        }

        void levelOrderTraversal(node* root) {
            queue<node*> q;
            q.push(root);
            
            while(!q.empty()){
                node* temp = q.front();
                cout<<temp -> data<<" ";
                q.pop();

                // if temp -> left is not null
                if(temp -> left){
                    q.push(temp -> left);
                }

                // if temp -> right is not null
                if(temp -> right){
                    q.push(temp -> right);
                }
            }
        }
    int height(node* root, int& diameter) {
        if(!root) {
            return 0;
        }
        int lh = height(root -> left, diameter);
        int rh = height(root -> right, diameter);
        cout<<"Hello"<<lh<<" "<<rh<<endl;
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }
};

int main(){
    node* root = NULL;
    Tree *obj = new Tree(); 
    root = obj -> buildTree(root);
    obj -> levelOrderTraversal(root);
    int diameater = 0;
    int data = obj -> height(root, diameater);
    cout<<data<<endl;
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1