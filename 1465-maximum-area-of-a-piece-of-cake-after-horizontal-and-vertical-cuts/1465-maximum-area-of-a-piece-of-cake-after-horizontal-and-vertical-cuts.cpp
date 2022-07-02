class Solution {
public:
    const long long int mod = 1000000007;
    int getmax(int h,vector<int>&hc){
        sort(hc.begin(),hc.end());
        int n=hc.size();
        int maxi=max(h-hc[n-1],hc[0]);
        for(int i=1;i<n;i++){
            maxi=max(maxi,hc[i]-hc[i-1]);
        }
        return maxi;
    }
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        int area= ((getmax(h,hC)%mod)*(getmax(w,vC)%mod))%mod;
        return area;
    }
};