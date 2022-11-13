/*
1) Vector is a container which is dynamic in nature
2) When we dont know the size of the particular data structure,
   in this case we use Vector
3) Advantages 
  - Easy to know size, 
  - no need to pass size, 
  - by default initialized with default values
  - can be returned from a function
  */

 vector<int> variable_name;
 ex. vector<int> v;

 vector<int> variable_name(size, initialized_value);
 ex. vector<int> v(10, 0); // [0,0,0,0,0,0,0,0,0,0]

 v.push_back(); // insert into last T.C. -> O(1)
 v.pop_back(); // pop from last value

 vector<int> v2 = v; // exact copy T.C -> O(n)
 vector<int> &v2 = v; // exact vector T.C -> O(1)