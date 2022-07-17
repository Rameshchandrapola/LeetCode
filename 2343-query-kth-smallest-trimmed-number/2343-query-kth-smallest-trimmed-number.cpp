class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        string temp;
        for(auto x:queries){
            priority_queue<pair<string,int>>v;
            for(int i=0;i<nums.size();i++){
                int j;
                j=nums[i].length()-x[1];
                temp=nums[i].substr(j,x[1]); 
                if(v.size()<x[0]){
                    v.push({temp,i});
                }else{
                    if(v.top().first>temp){
                        v.pop();
                        v.push({temp,i});
                    }
                }
            }
            int tem=v.top().second;
            ans.push_back(tem);
        }
        return ans;
    }
};