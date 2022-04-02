class Solution {
public:
    bool validPalindrome(string s) {
        
        int n=s.size();
        int i=0,j=n-1;
        
        while(i<=j&&s[i]==s[j]){
                i++;
                j--;
        }
        if(i>j){
            return true;
        }
        int i_1=i+1;
        int j_1=j-1;
        while(i_1<=j&&s[i_1]==s[j]){
            i_1++;
            j--;
        }
        if(i_1>j){
            return true;
        }
        while(i<=j_1&&s[i]==s[j_1]){

                j_1--;
                i++;
            
        }
        
        if(i>j_1){
            return true;
        }
        return false;
    }
};