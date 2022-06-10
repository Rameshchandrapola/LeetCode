class TreeAncestor {
    vector<vector<int>> dp;
    vector<int>depth;
    int log;
    public:
    TreeAncestor(int n, vector<int>& parent) {
        log = 0;
        while((1<<log)<=n)log++;
        
        dp=vector<vector<int>>(n,vector<int>(log));
        depth=vector<int>(n);
        parent[0]=-1;
        for(int v=0;v<n;v++){
            dp[v][0]=parent[v];
        }
         for(int i=1;i<log;i++){
             for(int v=0;v<n;v++)
                if(dp[v][i-1]==-1){
                    dp[v][i]=-1;
                }else
                    dp[v][i]=dp[ dp[v][i-1] ][i-1];
            }
    }
    
    int getKthAncestor(int node, int k) {

        for(int i=0;i<log;i++){
            if(k&(1<<i)){
                cout<<node<<endl;
                node=dp[node][i];
                if(node==-1){
                    return -1;
                }
            }
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */