class Solution
{
private:
    void solve(int i, int k, vector<int> &arr)
    {
        if (arr.size() == 1)
            return;

        i = (i + k - 1) % arr.size();
        arr.erase(arr.begin() + i);
        solve(i, k, arr);
    }

public:
    int josephus(int n, int k)
    {
        // Your code here
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        solve(0, k, arr);
        return arr[0];
    }
};