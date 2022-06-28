/* count the no of element in a sorted arrsy */
#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int ele) {
    int start = 0;
    int end = n;
    int res = -1;
    while(start<=end){
        int mid = (end+start)/2;
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

int lastOccurrence(int arr[], int n, int ele){
    int start = 0;
    int end = n;
    int res = -1;
    while(start<=end){
        int mid = (end+start)/2;
        if(ele == arr[mid]){
            res = mid;
            start = mid+1;
        }else if(ele < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return res;
}

int main(){
    int arr[]={1,2,3,4,6,6,6,6,6,7};
    int first = firstOccurrence(arr,10,6);
    int last = lastOccurrence(arr,10,6);
    int count = (last-first)+1;
    cout<<count;
    return 0;
}