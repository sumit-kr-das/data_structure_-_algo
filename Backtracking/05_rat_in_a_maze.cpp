class Solution{
    private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1){
            return true;
        }else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, int n,vector<string> &ans,int x, int y, vector<vector<int>> visited,string path){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        // mark the visited array
        visited[x][y] = 1;
        
        
        // 4 choices => D/L/R/U
        
        // Down
        int newX = (x+1);
        int newY = y;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('D');
            solve(m,n,ans,newX, newY,visited,path);
            path.pop_back();   
        }
        
        // Left
        newX = x;
        newY = (y-1);
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('L');
            solve(m,n,ans,newX, newY,visited,path);
            path.pop_back();   
        }
        
        // Right
        newX = x;
        newY = (y+1);
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('R');
            solve(m,n,ans,newX, newY,visited,path);
            path.pop_back();   
        }
        
        // Up
        newX = (x-1);
        newY = y;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('U');
            solve(m,n,ans,newX, newY,visited,path);
            path.pop_back();   
        }
        
        // backtrack the visited array
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        
        // if first cell is 0 then return blank 
        if(m[0][0] == 0){
            return ans;
        }
        
        int x = 0;
        int y = 0;
        
        vector<vector<int>> visited = m;
        
        // initialized with 0
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        
        solve(m,n,ans,x,y,visited,path);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};