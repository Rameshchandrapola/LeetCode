class Solution {
public:
    vector<vector<int>> func(vector<vector<int>>&grid,int i,int j){
        int m=grid.size();
        int n=grid[i].size();
        if(i<m-1&&grid[i+1][j]){
            grid[i+1][j]=2;
        }
        if(j<n-1&&grid[i][j+1]){
            grid[i][j+1]=2;
        }
        if(i>0&&grid[i-1][j]){
            grid[i-1][j]=2;
        }
        if(j>0&&grid[i][j-1]){
            grid[i][j-1]=2;
        }
        
        return grid;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count=0;
                if(grid[i][j]==1){          
        if(i<m-1&&grid[i+1][j]){
            count++;
        }
        if(j<n-1&&grid[i][j+1]){
                        count++;

        }
        if(i>0&& grid[i-1][j]){
                        count++;

        }
        if(j>0&&grid[i][j-1]){
                        count++;

        }
                    if(count==0){
            return -1;
        }
                }
                
            }
        }
        
        count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        
        vector<vector<int>> grid_1=grid;
        int mins=0;
        while(count){
            int temp=count;
            for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    func(grid_1,i,j);
                }
            }
        }
            grid=grid_1;
               count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
                mins++;
            if(temp==count){
                return -1;
            }
        }
    return mins;
        
    }
};