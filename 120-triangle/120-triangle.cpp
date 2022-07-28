class Solution {
public:
    void fns(vector<vector<int>>&dp,int j, int n,vector<vector<int>>triangle){
        for(j=1;j<n;j++)
        {
            for(int i=0;i<j+1;i++)
            {
                if(i==0)
                {
                    dp[j][i]=dp[j-1][i]+triangle[j][i];
                }
                else if(i==j)
                {
                    dp[j][i]=dp[j-1][i-1]+triangle[j][i];
                }
                else
                {
                    dp[j][i]=triangle[j][i]+min(dp[j-1][i],dp[j-1][i-1]);
                }
            }
        }
        return;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        dp[0][0]=triangle[0][0];
        fns(dp,1,n,triangle);
        int mini=100000;
        for(int i=0;i<n;i++){
            mini=min(dp[n-1][i],mini);
        }
        return mini;
    }
};