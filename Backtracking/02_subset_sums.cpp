class solution
{
private:
    void solve(int index, int sum, vector<int> &arr, int N, vector<int> &ans)
    {
        if (index >= N)
        {
            ans.push_back(sum);
            return;
        }

        // pick the element
        solve(index + 1, sum + arr[index], arr, N, ans);

        // do not pick the element
        solve(index + 1, sum, arr, N, ans);
    }

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        solve(0, 0, arr, N, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};