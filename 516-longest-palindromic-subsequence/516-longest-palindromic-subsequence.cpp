class Solution {
public:
    int func(int i, int j, string&s, string& t,vector<vector<int>>& dp){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==t[j]){
            return dp[i][j] = 1 + func(i-1,j-1,s,t,dp);
        }
        return dp[i][j] = max(func(i,j-1,s,t,dp),func(i-1,j,s,t,dp));
    }
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return func(n-1,m-1,s,t,dp);
    }
};