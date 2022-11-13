/*
    A pair in C++ is described as 
    a container that combines two elements of the 
    same or different data types.
*/
#include <iostream>
using namespace std;

int main() {
    pair<int, string> p;
    pair<int, string> p2;
    
    // initializing pairs 1
    p = make_pair(2, "abc");
    cout<<p.first<<" "<<p.second<<endl;
    
    // initializing pairs 2
    p2 = {2, "abc"};
    cout<<p2.first<<" "<<p2.second<<endl;
    
    // copy a pair into an another variable
    pair<int, string> &p3 = p;
    cout<<p3.first<<" "<<p3.second<<endl;
    
    return 0;
}