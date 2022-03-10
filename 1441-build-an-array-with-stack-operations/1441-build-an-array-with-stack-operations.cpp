class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int temp=0;
        int m=target.size();
        for(int i=1;i<=n;i++){
            temp=0;

            for(auto & x :target){
                if(i==x){
                    result.push_back("Push");
                    temp=5;
                                m--;
                }
            }
            if(temp==0){
                            result.push_back("Push");
                    result.push_back("Pop");
            }if(m==0){
                return result;
            }

        }
        return result;
    }
};