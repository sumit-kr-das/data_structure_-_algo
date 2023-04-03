#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main() {
    queue<int> q;
    for(int i = 0; i<5; i++) {
        q.push(i);
    }
    for(int i = 0; i<q.size();i++) {
        int x = q.front();
        cout<<x<<" ";
    }

    return 0;
}