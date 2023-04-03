class Solution {
private:
    int maxPathDown(TreeNode* root, int& maxi) {
        if(root == NULL) { return 0; }
        int lh = max(0, maxPathDown(root -> left, maxi));
        int rh = max(0, maxPathDown(root -> right, maxi));
        maxi = max(maxi, lh + rh + root -> val);
        return root -> val + max(lh, rh);
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
};