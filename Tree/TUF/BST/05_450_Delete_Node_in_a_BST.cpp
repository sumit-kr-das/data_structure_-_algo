class Solution {
private:
    TreeNode* healper(TreeNode* root) {
        if(root -> left == NULL) {
            return root -> right;
        }else if(root -> right == NULL) {
            return root -> left;
        }
        TreeNode* rightChild = root -> right;
        TreeNode* lastChild = findLastChild(root -> left);
        lastChild -> right = rightChild;
        return root -> left;
    }
    TreeNode* findLastChild(TreeNode* root) {
        if(root -> right == NULL) {
            return root;
        }
        return findLastChild(root -> right);
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) {
            return NULL;
        }
        if(root -> val == key) {
            return healper(root);
        }
        TreeNode* temp = root;
        while(root != NULL) {
            if(root->val > key) {
                if(root -> left != NULL && root -> left -> val == key) {
                    root -> left = healper(root -> left);
                    break;
                }else{
                    root = root -> left;
                }
            }else {
                if(root -> right != NULL && root -> right -> val == key) {
                    root -> right = healper(root -> right);
                    break;
                }else{
                    root = root -> right;
                }
            }
        }
        return temp;
    }
};