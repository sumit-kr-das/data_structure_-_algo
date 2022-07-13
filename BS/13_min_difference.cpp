#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int> arr, int ele){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == ele){
            return mid;
        }else if(ele < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    
    int absoluteStart = arr[start] - ele;
    int absoluteEnd = arr[end] - ele;
    if(absoluteStart>absoluteEnd){
        return start;
    }else{
        return end;
    }
}

int main(){
    vector<int> arr = {1,3,8,10,15};
    int key = 11;
    cout<<BS(arr,key);
    return 0;
}