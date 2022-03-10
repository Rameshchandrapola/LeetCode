class Solution {
public:
    bool isValid(string s) {
        stack<char>result;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(result.size()){
                if(result.top()=='['&&s[i]==']'){
                    
                }else if(result.top()=='{'&&s[i]=='}'){
                    
                }else if(result.top()=='('&&s[i]==')'){
                    
                }else{
                    result.push(c);
                    continue;
                }
                result.pop();
            }else{
                result.push(c);
            }
        }
        if(result.size()){
            return false;
        }else {
            return true;
        }
        
    }
};