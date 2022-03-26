class Solution {
public:
    static bool comp(vector<int>& a,vector<int>& b){
        if((a[0]-a[1])>(b[0]-b[1]))return true;
        return false;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int total=0;
        sort(costs.begin(),costs.end(),comp);
        int n=costs.size()/2;
        for(int i=0;i<n;i++){
            total+=costs[i][1]+costs[i+n][0];
        }
        return total;
    }
};