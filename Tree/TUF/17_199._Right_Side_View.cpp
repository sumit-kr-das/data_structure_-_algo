class Solution {
private:
    void findRightView(TreeNode* root, int level, vector<int>& ans) {
        if(!root) return;
        if(ans.size() == level) {
            ans.push_back(root -> val);
        }
        findRightView(root -> right, level+1, ans);
        findRightView(root -> left, level+1, ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        findRightView(root, 0, ans);
        return ans;
    }
};