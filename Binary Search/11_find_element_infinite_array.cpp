include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> arr, int start, int end, int target){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}

int main() {
 vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
    int target = 12;    
    int start = 0;
    int end = 1;
    while(target>arr[end]){
        start = end;
        end = end *2;
    }
    cout << bs(arr,start,end,target);
    return 0;
}