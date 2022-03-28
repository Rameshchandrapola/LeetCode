class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // vector<int> temp;
        int n=nums.size();
        // for(int i=target;i<n;i++){
        //     temp.push_back(nums[i]);
        // }
        // for(int i=0;i<target-1;i++){
        //     temp.push_back(nums[i]);
        // }
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                return 1;
            }
        }
        return 0;
    }
};