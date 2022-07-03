// Find the floor of an element in a sorted array
// floor = greatest element smaller than that_given_number

#include<iostream>
#include<vector>
using namespace std;

int floorValue(vector <int> arr, int ele){
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start<=end) {
        int mid = start+((end-1)/2);
        if(arr[mid] == ele){
            return mid;
        }
        if(ele > arr[mid]){
            res = mid;
            start = mid+1;
        }else if(ele < arr[mid]){
            end = mid-1;
        }
    }
    return res;
}

int main(){
    vector <int> arr = {10,12,15,18,22,50};
    int ele = 19;
    cout<<floorValue(arr,ele);
    return 0;
}