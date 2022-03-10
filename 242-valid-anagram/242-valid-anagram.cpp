class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        if(s.size()==t.size()){
            for(int i=0;i<s.size();i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
        }else{
            return false;
        }
        return true;
    }
};