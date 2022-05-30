class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> points=intervals;
        sort(points.begin(),points.end(),[](vector<int> &a,vector<int> &b){return a[1]<b[1];});
        int count=1;
        int finish_time=points[0][1];
        for(int j=1;j<points.size();j++){
            if(points[j][0]>=finish_time){
                count++;
                finish_time=points[j][1];
            }
        }
        return points.size()-count;
    }
};