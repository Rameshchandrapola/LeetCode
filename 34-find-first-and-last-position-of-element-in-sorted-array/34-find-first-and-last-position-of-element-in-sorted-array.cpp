class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int temp=0;
        map<int,int>::iterator itr;
        itr = mp.find(target);
        if (itr == mp.end())
            v.push_back(-1),v.push_back(-1);
        else{
            for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                break;
            }
            temp++;
            }
            v.push_back(temp);
            v.push_back(mp[target]+temp-1); 
        }
        return v;
    }
};