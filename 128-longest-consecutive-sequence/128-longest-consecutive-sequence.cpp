class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        int cur=1,ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]){
              continue;
          }else if(nums[i]==nums[i-1]+1){
              cur++;
          }else{
              ans=max(cur,ans);
              cur=1;
          }
        }
        return max(ans,cur);
    }
};