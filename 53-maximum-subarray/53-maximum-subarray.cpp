class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cur=nums[0],sum=nums[0];
        for(int i=1;i<n;i++){
            cur=max(nums[i],cur+nums[i]);
            if(cur>sum){
                sum=cur;
            }
        }
        return sum;
    }
};