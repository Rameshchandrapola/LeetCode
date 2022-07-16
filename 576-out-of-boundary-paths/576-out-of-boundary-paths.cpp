class Solution {
public:
    int mod=pow(10,9)+7;
    int fns(int row,int col,int moves,int i, int j,vector<vector<vector<int>>>&dp){
        if(i<0||j<0||i>=row||j>=col)
            return 1;
        if(moves==0)
            return 0;
        if(dp[moves][i][j]!=-1)
            return dp[moves][i][j]%mod;
        int temp=0;
        temp=(temp+fns(row,col,moves-1,i-1,j,dp))%mod;
        temp=(temp+fns(row,col,moves-1,i,j-1,dp))%mod;
        temp=(temp+fns(row,col,moves-1,i,j+1,dp))%mod;
        temp=(temp+fns(row,col,moves-1,i+1,j,dp))%mod;
        dp[moves][i][j]=temp;
        return dp[moves][i][j];

    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(maxMove+1, vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        dp[maxMove][m][n]=fns(m,n,maxMove,startRow,startColumn,dp);
        return dp[maxMove][m][n];
    }
};