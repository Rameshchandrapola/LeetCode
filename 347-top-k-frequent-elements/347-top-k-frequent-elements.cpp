class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto itr:mp){
            pair<int,int>temp;
            temp.first=itr.second;
            temp.second=itr.first;
            pq.push(temp);
        }

        vector<int>ans;
        for(int i=0;i<k;i++){
            auto itr=pq.top();
            pq.pop();
            ans.push_back(itr.second);
        }
        return ans;
    }
};