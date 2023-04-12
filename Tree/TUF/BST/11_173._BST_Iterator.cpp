class BSTIterator {
    stack<TreeNode*> myStack;
    void pushAll(TreeNode* node) {
        for(; node != NULL; myStack.push(node), node = node -> left);
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* tempNode = myStack.top();
        myStack.pop();
        pushAll(tempNode -> right);
        return tempNode -> val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};