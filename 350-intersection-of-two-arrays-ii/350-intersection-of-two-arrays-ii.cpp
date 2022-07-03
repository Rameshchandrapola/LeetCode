class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>ans;
        for(auto it:nums1){
            mp[it]++;
        }
        for(auto it:nums2){
            if(mp[it]>0)
                mp[it]--,ans.push_back(it);
        }
        return ans;
    }
};