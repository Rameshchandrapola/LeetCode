class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        int x=0;
        char prev='(';
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                x++;
            }else{
                x--;
                if(prev=='('){
                    count+=1<<x;
                }
            }
            prev=s[i];
        }
        return count;
    }
};