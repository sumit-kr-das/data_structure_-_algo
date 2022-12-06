class Solution {
private:
    void solve(string digits,vector<string> &ans,int index,string output,string mapping[]){
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }

        int num=digits[index]-'0';
        string value=mapping[num];

        for(int i=0; i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,ans,index+1,output,mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){return {};}
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,index,output,mapping);
        return ans;
    }
};