class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || p == root || q == root) {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root -> left, p, q);
        TreeNode* right = lowestCommonAncestor(root -> right, p, q);
        
        if(left == NULL) {
            return right;
        }else if(right == NULL) {
            return left;
        }else{
            return root;
        }
    }
};

//----------------------------------gfg solution----------------------------------

class Solution{
public:
    Node *lca(Node *root, int n1, int n2){
        bool b1, b2;
        if (root == NULL) return NULL;
        Node *ans = NULL;
        if (root->data == n1){
            b1 = true;
            ans = root;
        }
        else if (root->data == n2){
            b2 = true;
            ans = root;
        }
        Node *leftAns = lca(root->left, n1, n2);
        Node *rightAns = lca(root->right, n1, n2);
        if (ans != NULL)
            return ans;
        if (leftAns != NULL && rightAns != NULL)
            return root;
        return leftAns != NULL ? leftAns : rightAns;
    }
};