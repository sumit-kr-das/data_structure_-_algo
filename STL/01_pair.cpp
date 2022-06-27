#include<iostream>
using namespace std;

int main(){
    pair <int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair <int, pair<int, int>> q = {1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int, int> arr[] = {{1,0},{2,5},{3,7}};
    cout<<arr[1].first<<" "<<arr[1].second<<endl;

    return 0;
}