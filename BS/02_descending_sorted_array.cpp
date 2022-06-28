#include<iostream>
using namespace std;

int sort(int arr[], int size, int ele){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+end)/2;
        if(ele == arr[mid]){
            return mid;
        }else if(ele < arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={12,10,8,6,4,2,1};
    cout<<sort(arr,7,1);
    return 0;
}