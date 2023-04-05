// TC -> O(n)
// SC -> O(n)
class Solution {
private:
    bool isLeaf(Node* root) {
        return !root -> left && !root -> right;
    }
    void addLeftBoundary(Node* root, vector<int>& ans) {
        Node* itr = root -> left;
        while(itr) {
            if(!isLeaf(itr)) ans.push_back(itr -> data);
            if(itr -> left)
                itr = itr -> left;
            else
                itr = itr -> right;
        }
    }
    void addRightBoundary(Node* root, vector<int>& ans) {
        Node* itr = root -> right;
        vector<int> temp;
        while(itr) {
            if(!isLeaf(itr)) temp.push_back(itr -> data);
            if(itr -> right)
                itr = itr -> right;
            else
                itr = itr -> left;
        }
        for(int i = temp.size()-1; i >= 0; --i) {
            ans.push_back(temp[i]);
        }
    }
    void addLeaf(Node* root, vector<int>& ans) {
        if(isLeaf(root)){
            ans.push_back(root -> data);
            return;
        }
        if(root -> left){
            addLeaf(root -> left, ans);
        }
        if(root -> right) {
            addLeaf(root -> right, ans);
        }
    }
public:
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(!root) return ans;
        if(!isLeaf(root)) ans.push_back(root -> data);
        addLeftBoundary(root, ans);
        addLeaf(root, ans);
        addRightBoundary(root, ans);
        return ans;
    }
};