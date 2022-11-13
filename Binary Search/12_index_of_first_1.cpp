/* 
    Find the index of first 1 in infinite binary sorted array 
    [0,0,0,0,0,1,1,1,1,1] => ans is index 5
*/

#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector <int> arr, int start, int end, int ele){
    int res = -1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            res = mid;
            end = mid-1;
        }else if(ele > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return res;
}

int main(){
    vector <int> arr ={0,0,0,0,0,0,0,0,1,1,1,1,1,1};
    int target = 1;
    int start = 0;
    int end = 1;
    while(target > arr[end]){
        start = end;
        end = end*2;
    }
    cout<<"start "<<start<<" "<<"end "<<end<<endl;
    cout<<firstOccurrence(arr,start,end,target);
    return 0;
    
}