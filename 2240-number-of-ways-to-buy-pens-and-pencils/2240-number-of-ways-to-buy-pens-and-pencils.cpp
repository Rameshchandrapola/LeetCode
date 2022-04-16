class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int result=0;
        int temp=0;
        for(int i=0;i<=total;i+=cost1){
            temp=total-i;
            result+=temp/cost2;
            result++;
        }
        return result;
    }
};