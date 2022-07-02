class Solution {
public:
    int countHousePlacements(int n) {
        const long long int mod= 1000000007;
        long long int house=1,space=1;
        long long int total=house+space;
        for(int i=2;i<=n;i++){
            house=space;
            space=total;
            total=(house+space)%mod;
        }
        return (total*total)%mod;
    }
};