class Solution {
private:
    void findCombination(vector<int> &arr, int target, int index,vector<vector<int>> &ans,vector<int> &ds){
        // base case
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        // pick the element
        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findCombination(arr, target-arr[index], index, ans, ds);
            ds.pop_back();    
        }

        findCombination(arr, target, index+1, ans, ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        findCombination(candidates, target, index, ans, ds);
        return ans;
    }
};

