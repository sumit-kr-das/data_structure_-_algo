// Searching an element from nearly sorted array

#include<iostream>
#include<vector>
using namespace std;

int searchEle(vector<int> arr, int ele){
    int start = 0;
    int end = arr.size();
    int mid = start + ((end-start)/2);

    if(ele == arr[mid]){
        return mid;
    }else if((mid-1) >= start && arr[mid-1] == ele){
        return mid-1;
    }else if((mid+1) <= end && arr[mid+1] == ele){
        return mid+1;
    }

    if(ele <= arr[mid-2]){
        end = mid-2;
    }else if(ele >= arr[mid+2]){
        start = mid+2;
    }
    return -1;
}

int main(){
    vector<int> arr = {5,10,30,50,20,40};
    cout<<searchEle(arr,40);
    return 0;
}