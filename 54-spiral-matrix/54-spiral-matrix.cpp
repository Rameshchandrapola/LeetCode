class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int dir=1;
        vector<int>ans;
        int right=n-1,left=0,top=0,bottom=m-1;
        while(left<=right && top<=bottom){
            if(dir==1){
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                dir=2;
                top++;
            }else if(dir==2){
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                dir++;
                right--;
            }else if(dir==3){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                dir++;
                bottom--;
            }else if(dir==4){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                dir=1;
                left++;
            }
        }
        return ans;
    }
};