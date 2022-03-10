class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>temp;
        for(string s:strs){
            string tall=s;
            sort(tall.begin(),tall.end());
            temp[tall].push_back(s);
        }
        vector<vector<string>> final;
        for(auto it:temp){
            final.push_back(it.second);
        }
        return final;
    }
};