class Solution{
  public:
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node* successor = NULL;
        while(root != NULL) {
            if(x -> data >= root -> data) {
                root = root -> right;
            }else{
                successor = root;
                root = root -> left;
            }
        }
        return successor;
    }
};