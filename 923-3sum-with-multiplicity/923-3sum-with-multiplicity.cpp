class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long int ans=0;
        long long int i=0,j=0,k=0;
        map<long long int,long long int>count;
        for(i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        long long int mod = pow(10,9)+7;
        for(i=0;i<=100;i++){
            for(j=i;j<=100;j++){
                k=target-i-j;
                if(k<0||k>100){
                    continue;

                }else if(i==j&&j==k){
                    ans+=(count[i]*(count[i]-1)*(count[i]-2))/6;

                    ans=ans%mod;
                }else if(i==j&&j!=k){
                    ans+=(count[i]*(count[i]-1)/2)*count[k];
                }else if(i<k&&j<k){
                    ans+=count[i]*count[j]*count[k];
                }
            }
        }

        return (int)ans%mod;
    }
};