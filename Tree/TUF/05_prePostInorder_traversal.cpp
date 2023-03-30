class Solution {
    public:
        vector<int> preInPostTraversal(TreeNode* root) {
            stack<pair<TreeNode*, int>> st;
            st.push({1,1});
            vector<int> pre,in,post;
            if(root == NULL) {
                return st;
            }
            
            while(!st.empty()) {
                auto itr = st.top();
                st.pop();
                // this is a part of preorder
                // increment 1 to 2
                // push the left side of the tree
                if(itr.second == 1) {
                    pre.push_back(itr.first -> val);
                    itr.second++;
                    st.push(itr);

                    if(itr -> left != NULL) {
                        st.push({ itr.first -> left, 1});
                    }
                }
                // this is a part of inorder
                // increment 2 to 3
                // push the right side of the tree
                else if(itr.second == 2) {
                    in.push_back(itr.first -> val);
                    itr.second++;
                    st.push(itr);

                    if(itr.first -> right != NULL) {
                        st.push({ itr.first -> right, 1});
                    }
                }
                // don't push it back again
                else {
                    post.push_back(itr.first -> val);
                }
            }
        }
}