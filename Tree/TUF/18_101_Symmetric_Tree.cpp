class Solution {
private:
    bool checkSymmetric(TreeNode* left, TreeNode* right) {
        if(!left || !right){
            return left == right;
        }
        if(left -> val != right -> val) {
            return false;
        }
        return 
            checkSymmetric(left -> left, right -> right)
            &&
            checkSymmetric(left -> right, right -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return !root || checkSymmetric(root -> left, root -> right);
    }
};