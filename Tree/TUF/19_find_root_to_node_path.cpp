bool getPath(TreeNode* root, vector<int>& arr, int target) {
    if(root == NULL) { return false; }
    arr.push_back(root -> val);
    if(root -> val == target) { return true; }
    if(getPath(root -> left, arr, target) || getPath(root -> right, arr, target)){
        return true;
    }
    arr.pop_back();
    return false;
}