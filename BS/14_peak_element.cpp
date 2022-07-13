#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(mid>0 && mid<arr.size()-1){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }else if(arr[mid] < arr[mid-1]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else if(mid == 0){
            if(arr[0]>arr[1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid<arr[arr.size()-1]){
            if(arr[arr.size()-1]>arr[arr.size()-2]){
                return arr.size()-1;
            }else{
                return arr.size()-2;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {5,10,20,25,15};
    cout<<peakElement(arr);
    return 0;
}