class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){return 0;}
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty()){
            int si=q.size();
            int mi=q.front().second;
            int f,l;
            for(int i=0;i<si;i++){
                TreeNode* n=q.front().first;
                int cur= q.front().second-mi;
                q.pop();
                
                if(i==0){f=cur;}
                if(i==si-1){l=cur;}
                if(n->left){
                    q.push({n->left, cur*2ll+1});
                }
                if(n->right){
                    q.push({n->right,cur*2ll+2});
                }
            }
            ans=max(ans,l-f+1);
        }
        return ans;
    }
};