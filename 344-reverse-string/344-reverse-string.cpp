class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            temp=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=temp;
        }
        return ;
    }
};