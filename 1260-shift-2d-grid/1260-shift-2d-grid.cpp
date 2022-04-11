class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        deque<int> stream;
        
        for (int r = 0; r < grid.size(); r++)
            for (int c = 0; c < grid[0].size(); c++)
                stream.push_back(grid[r][c]);
        
        for (int i = 0; i < k; i++) {
            stream.push_front(stream.back());
            stream.pop_back();
        }
        
        int i = 0;
        for (int r = 0; r < grid.size(); r++) {
            for (int c = 0; c < grid[0].size(); c++) {
                grid[r][c] = stream[i];
                i++;
            }
        }
        
        return grid;
    }
};