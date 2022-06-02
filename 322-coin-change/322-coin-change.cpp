class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>table(amount+1,INT_MAX);
        table[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    int sub_res=table[i-coins[j]];
                    if(sub_res!=INT_MAX&&sub_res+1<table[i]){
                        table[i]=sub_res+1;
                    }
                }
            }
        }
        if(table[amount]!=INT_MAX){
            return table[amount];
        }else 
            return -1;
    }
};