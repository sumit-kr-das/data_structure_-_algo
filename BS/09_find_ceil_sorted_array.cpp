#include<iostream>
#include<vector>
using namespace std;


// Lets find the ciel of the gven number
int ceilOfArray(vector <int> arr, int ele) {
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] == ele){
            return mid;
        }
        if(ele < arr[mid]){
            res = mid;
            end = mid-1;
        }else if(ele > arr[mid]){
            start = mid+1;
        }
    }
    return res;
}

int main(){
    vector <int> arr = {1,2,3,4,6,7,9,12,17};
    cout<<ceilOfArray(arr,13);
    return 0;
}