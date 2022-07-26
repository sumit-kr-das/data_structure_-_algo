#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int ele){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+(end-start))/2;
        if(ele == arr[mid]){
            return mid;
        }else if(ele<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<binarySearch(arr,7,6);
    return 0;
}
