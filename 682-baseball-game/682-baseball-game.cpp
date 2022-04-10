class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>array_sum;
        int n=array_sum.size();
        for(auto op:ops){
            if(op=="+"){
                int n=array_sum.size();
                array_sum.push_back(array_sum[n-1]+array_sum[n-2]);
            }else if(op=="D"){
                array_sum.push_back(2*array_sum.back());
            }else if(op=="C"){
                array_sum.pop_back();
            }else{
                array_sum.push_back(stoi(op));
            }
        }
        int sum=0;
        for(auto i:array_sum){
            sum+=i;           
        }
        return sum;
    }
};