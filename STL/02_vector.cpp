#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;

    v.push_back(1);
    v.emplace_back(2); // dynamically increases its size push as two in the back
    /* generally emplace_back is faster than push_back */ 

    /* define vector of an pair datatype */
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(2,3);

    vector<int> v1(5,50); // 5 instances with 50 ex: {50,50,50,50,50}

    vector<int> v2(5); // a container of 5 instances with 5 garbage values or five zeros

    /* copy one vector to another vector */
    vector<int> vc(5,20);
    vector<int> vcc(vc);


}