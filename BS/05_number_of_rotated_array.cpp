/* Number of Times a Sorted array is Rotated ) */
#include<iostream>
using namespace std;

int noOfRotated(int arr[], int size){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+end)/2;
        int next = (mid+1)%size;
        int prev = (mid+size-1)%size;
        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }
        if(arr[start] <= arr[mid]){
            start = mid+1;
        }else if(arr[mid] <= arr[end]){
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12,15,1,2,5,6,8};
    cout<<noOfRotated(arr,6);
    return 0;
}