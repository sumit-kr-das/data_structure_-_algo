#include <iostream>
using namespace std;

void printVector(vector<int> v){
    cout<<"size of vector is "<<v.size()<<endl;
    // T.C. of v.size() => O(1)
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main() {
    vector<int> v;
    int size;
    cin>>size;
    
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
        // T.C. of push_back() => O(1)
    }
    
    printVector(v);
    return 0;
}