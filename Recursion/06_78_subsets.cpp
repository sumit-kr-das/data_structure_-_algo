class Solution {
    private:
        void solve(int index,vector<int> nums,vector<int> &currSet,vector<vector<int>> &ans) {
            if(index >= nums.size()){
                ans.push_back(currSet);
                return;
            }
            // exclusive
            solve(index+1,nums,currSet,ans);
            // include
            currSet.push_back(nums[index]);
            solve(index+1,nums,currSet,ans);
            currSet.pop_back();
        }
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> currSet;
            int index = 0;
            solve(index,nums,currSet,ans);
            return ans;
        }
};