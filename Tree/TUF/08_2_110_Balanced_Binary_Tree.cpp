/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(height(root -> left), height(root -> left));
    }
    void inorderUtil(TreeNode* root, bool & ans) {
        if(root != NULL) {
            int lh = height(root -> left);
            int rh = height(root -> right);

            if(abs(lh - rh) > 1) { ans = ans && false; }

            if(ans == false) {
                return;
            }
            inorderUtil(root -> left, ans);
            inorderUtil(root -> right, ans);
        }
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorderUtil(root, ans);
        return ans;
    }
};
// -------------------- striver --------------------
class Solution {
public:
    int dfsHeight(TreeNode* root) {
        if(root == NULL) return 0;
        int lh = dfsHeight(root -> left);
        if(lh == -1) return -1;
        int rh = dfsHeight(root -> right);
        if(rh == -1) return -1;
        if(abs(lh - rh) > 1) return -1;
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }
};