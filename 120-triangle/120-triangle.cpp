class Solution {
public:
    void fns(int j, int n,vector<vector<int>>&triangle){
        for(j=1;j<n;j++)
        {
            for(int i=0;i<j+1;i++)
            {
                if(i==0)
                {
                    triangle[j][i]+=triangle[j-1][i];
                }
                else if(i==j)
                {
                    triangle[j][i]+=triangle[j-1][i-1];
                }
                else
                {
                    triangle[j][i]+=min(triangle[j-1][i],triangle[j-1][i-1]);
                }
            }
        }
        return;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        dp[0][0]=triangle[0][0];
        fns(1,n,triangle);
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(triangle[n-1][i],mini);
        }
        return mini;
    }
};