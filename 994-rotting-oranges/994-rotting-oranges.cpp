class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int fresh_count=0;
        int time=-1;
        queue<pair<int,int>>rot;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    rot.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh_count++;
                }
            }}
  if(rot.empty()&& fresh_count==0){
      return 0;
  }      
        while(!rot.empty()){
            int rotten_count=rot.size();
            
            while(rotten_count){
                pair<int,int>cur=rot.front();
                int i=cur.first;
                int j=cur.second;
                 if(i<m-1&&grid[i+1][j]==1){
            grid[i+1][j]=2;
            rot.push({i+1,j});
        }
        if(j<n-1&&grid[i][j+1]==1){
            grid[i][j+1]=2;
            rot.push({i,j+1});
        }
        if(i>0&&grid[i-1][j]==1){
            grid[i-1][j]=2;
                        rot.push({i-1,j});

        }
        if(j>0&&grid[i][j-1]==1){
            grid[i][j-1]=2;
                        rot.push({i,j-1});

        }
                rot.pop();
				rotten_count--;
            }

            time=time+1;
        }
    fresh_count=0;    
for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    fresh_count++;
                    
                }
            }}
	if(fresh_count){
		return -1;
	}
    return time;
        
    }
};