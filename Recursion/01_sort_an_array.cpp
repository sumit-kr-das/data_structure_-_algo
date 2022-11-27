#include<iostream>
using namespace std;

void insert(int temp, vector<int> &v){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(temp,v);
    v.push_back(val);
    return;
}

void sort(vector<int> &v){
    if(v.size()==1) return;
    
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(temp,v); 
}


int main(){
    vector<int> v;
    int size,a;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(auto &p:v){
        cout<<p<<" ";
    }
    
    sort(v);
    
    cout<<endl;
    
    for(auto &p:v){
        cout<<p<<" ";
    }
    
    return 0;
}