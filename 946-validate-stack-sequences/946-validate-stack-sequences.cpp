class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> checker;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            checker.push(pushed[i]);
            while(!checker.empty()&&checker.top()==popped[j]){
                j++;
                checker.pop();
            }
        }
        return checker.empty();
    }
};