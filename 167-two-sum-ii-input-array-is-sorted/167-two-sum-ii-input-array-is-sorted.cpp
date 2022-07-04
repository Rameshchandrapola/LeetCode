class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size()-1;
        int l=0;
        while(l<n){
            if(numbers[l]+numbers[n]==target){
                return {l+1,n+1};
            }else if(numbers[l]+numbers[n]>target){
                n--;
            }else{
                l++;
            }
        }
        return {};
    }
};