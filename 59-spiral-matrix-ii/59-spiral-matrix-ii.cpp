class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    int r1=0,r2=n-1;
    int c1=0,c2=n-1;
    int num=0;
    
    vector<vector<int>>final_mat(n,vector<int>(n));
    
    while(r1<=r2 && c1<=c2)
    {
        for(int i=c1;i<=c2;i++)
        {
            final_mat[r1][i] = ++num;
        }
       
        for(int i=r1+1;i<=r2;i++) 
        {
             final_mat[i][c2] = ++num;
        }
       
        for(int i=c2-1;i>=c1;i--) 
        {
            final_mat[r2][i] = ++num;
        }
        
        for(int i=r2-1;i>r1;i--) 
        {
                        final_mat[i][c1] = ++num;
        }
        
        r1++;
        c1++;
        r2--;
        c2--;
    }
    return final_mat;
    
    }

};