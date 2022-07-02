class Solution {
public:
    int total(vector<int>& a, vector<int>& b){
        int temp=0,n=a.size();
        int maxi=0,sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        for(int i=0;i<n;i++){
            temp+=b[i]-a[i];
            if(temp<0)
                temp=0;
            maxi=max(temp,maxi);
        }
        return maxi+sum;
    }
        
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        return max(total(nums1,nums2),total(nums2,nums1));
    }
};