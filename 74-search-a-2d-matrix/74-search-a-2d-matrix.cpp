class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i;
       
        for(i=0;i<matrix.size();i++){
            if(matrix[i][0]==target){
                return true;
            }else if(matrix[i][0]>target){
            
                break;
            }
        }
        if(i==0){
            return false;
        }
        i--;
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
        return false;
    }
};