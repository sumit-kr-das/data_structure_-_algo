#include<iostream>
using namespace std;

int findFirst(int arr[], int size, int ele){
    int start = 0;
    int end = size;
    int res = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(ele == arr[mid]){
            res = mid;
            end = mid-1;
        }else if(ele < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return res;
}

int main(){
    int arr[]={1,2,3,4,5,6,6,6,7};
    cout<<findFirst(arr,7,6);
    return 0;
}