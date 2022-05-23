class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        int n= stockPrices.size();
        if(n==1){
            return 0;
        }
        long double dy,dx;
        sort(stockPrices.begin(),stockPrices.end());
        dy=stockPrices[1][1]-stockPrices[0][1];
        dx=stockPrices[1][0]-stockPrices[0][0];
        long double Dy,Dx;
        int total=1;
        for(int i=2;i<n;i++){
            Dy=stockPrices[i][1]-stockPrices[i-1][1];
            Dx=stockPrices[i][0]-stockPrices[i-1][0];
            long double s1=dy/dx;
            long double s2=Dy/Dx;
            if(s1!=s2){
                total++;
            }else{
                cout<<s1<<s2<<dy<<" "<<dx<<" "<<Dy<<" "<<Dx<<endl;
            }
            dy=Dy;
            dx=Dx;
        }
        return total;
    }
};