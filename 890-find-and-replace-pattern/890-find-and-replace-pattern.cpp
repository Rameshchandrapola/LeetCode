class Solution {
    public:
    bool fns(string str1, string str2){
        int n = str1.length();
		
        unordered_map< char,char > mp;
        vector<bool> visited (26,false);
        
        for(int i = 0; i < n; i++){
            char c1 = str1[i],c2 = str2[i];
            
            if( mp[c1] && mp[c1]!=c2)
                return false;
            if( !mp[c1] && visited[c2-'a'])
                return false;
            
            mp[c1] = c2, visited[ c2-'a' ] = true;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word : words)
            if(fns(word,pattern)) ans.emplace_back(word);
        return ans;
    }
};