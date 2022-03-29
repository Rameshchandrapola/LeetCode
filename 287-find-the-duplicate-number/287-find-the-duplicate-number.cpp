class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>temp;
        int i;
        for( i=0;i<nums.size();i++){
            temp[nums[i]]++;
                if(temp[nums[i]]>1){
                    break;
                }
        }
        return nums[i];
    }
};