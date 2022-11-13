/* Find an element in a roated sorted array */

#include<iostream>
#include<vector>
using namespace std;

int noOfRotated(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int n = arr.size();
    while(start<=end){
        int mid = (start+end)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }
        if(arr[mid] <= arr[end]){
            end = mid-1;
        }else if(arr[start] <= arr[mid]){
            start = mid+1;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr,int start, int end, int ele){
    while(start<=end){
        int mid = (start+end)/2;
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
    vector<int> arr = {12,15,16,17,18,1,2,5,6,8};
    int minEle = noOfRotated(arr);
    int ele = 5;
    cout<<binarySearch(arr,0,minEle-1,ele)<<endl;
    cout<<binarySearch(arr,minEle,arr.size()-1,ele)<<endl;
    return 0;
}