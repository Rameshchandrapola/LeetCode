class Solution {
public:
    int par[100005];
    
    int find(int x) {
        if (par[x] == -1) 
            return x;
        return par[x] = find(par[x]);
    }
    
    void merge(int x, int y) {
        int xp = find(x);
        int yp = find(y);
        if (xp != yp) 
            par[xp]=yp;
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        int v=pairs.size();
        for(int i=0;i<n;i++){
            par[i]=-1;
        }
        for(int i=0;i<v;i++){
            int x = find(pairs[i][0]), y = find(pairs[i][1]);            
            if (x != y) merge(x, y);
        }
        unordered_map<int, vector<int>> m;
        for(int i=0;i<n;i++){
            m[find(i)].push_back(i);
        }
        string vv=s;
        for(auto &x: m){
            string str = ""; int j = 0;
            for (auto i : x.second) { str += s[i]; }
            sort(str.begin(), str.end());
            for (auto i : x.second) { s[i] = str[j++]; }
        }
        return s;
    }
};