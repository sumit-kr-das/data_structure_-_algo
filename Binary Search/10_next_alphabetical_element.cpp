#include<iostream>
#include<vector>
using namespace std;


// find next alphatical element
char findNextAlphabet(vector <char> arr, char ele){
    int start = 0;
    int end = arr.size()-1;
    char result = '#';
    while(start<=end) {
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            start = mid+1;
        }else if(ele < arr[mid]){
            result = arr[mid];
            end = mid-1;
        }else if(ele > arr[mid]){
            start = mid+1;
        }
    }
    return result;
}

int main(){
    vector <char> arr = {'a','b','c','d','e','f'};
    char ele = 'e';
    cout<<findNextAlphabet(arr,ele);
    return 0;
}