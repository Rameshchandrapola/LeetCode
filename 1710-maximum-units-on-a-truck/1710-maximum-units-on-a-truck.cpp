class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int current_weight=0;
        int total_units=0;
        int n=boxTypes.size();
        for(int i=0;i<n;i++){
            if(current_weight+boxTypes[i][0]<=truckSize){
                current_weight+=boxTypes[i][0];
                total_units+=boxTypes[i][0]*boxTypes[i][1];
            }else{
                int remain=truckSize-current_weight;
                total_units+=remain*(boxTypes[i][1]);
                break;
            }
        }
        return total_units;
    }
};