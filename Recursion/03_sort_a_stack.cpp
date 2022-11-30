#include<iostream>
using namespace std;

void insert(int temp, stack<int> &s){
    if(s.size() == 0 || s.top() <= temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(temp, s);
    s.push(val);
    return;
}

void sort(stack<int> &s){
    if(s.size()==1) return;
    int temp = s.top();
    s.pop();
    sort(s);
    insert(temp,s);
}

int main(){
    stack<int> s;
    int size,ele;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>ele;
        s.push(ele);
    }
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}