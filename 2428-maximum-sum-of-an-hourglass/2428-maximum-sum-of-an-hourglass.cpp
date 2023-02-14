class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int s1=0,s2;
        for(int i=0;i<m-2;i++){
             for(int j=0;j<n-2;j++){
                 s2=grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                 s1=max(s1,s2);
             }
        }
        
        return s1;

    }
};