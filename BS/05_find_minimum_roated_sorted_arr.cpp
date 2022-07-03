/* Number of Times a Sorted array is Rotated ) */
/* 153. Find Minimum in Rotated Sorted Array */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int n = nums.size();
        while(start<=end){
            int mid = (start+end)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
                return nums[mid];
            }
            if(nums[mid] <= nums[end]){
                end = mid-1;
            }else if(nums[start] <= nums[mid]){
                start = mid+1;
            }
        }
        return -1;
    }
};