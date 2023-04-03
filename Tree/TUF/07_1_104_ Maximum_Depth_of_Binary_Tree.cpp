// -------------------- using recusrive traversal --------------------
class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root == NULL) { return 0; }
        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }
};
// -------------------- using level order traversal --------------------
class Solution {
public:
    int maxDepth(TreeNode* root) {
       if(root == NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int height = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if(temp -> left){
                    q.push(temp -> left);
                }
                if(temp -> right){
                    q.push(temp -> right);
                }
            }
            height++;
        }
        return height;
    }
};
