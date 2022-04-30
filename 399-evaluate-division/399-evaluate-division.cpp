class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        int t=1;
        unordered_map<string, int> var_map;
        
        for (int i=0; i<equations.size(); i++) {
            if (var_map[equations[i][0]] == 0) {
                var_map[equations[i][0]] = t++;
            }
            
            if (var_map[equations[i][1]] == 0) {
                var_map[equations[i][1]] = t++;
            }
        }
        
        vector<vector<double>> adj_mat(t, vector<double>(t, -1));
    
        for (int i=0; i<equations.size(); i++) {
            int u = var_map[equations[i][0]];
            int v = var_map[equations[i][1]];
            double w = values[i];
    
            adj_mat[u][v] = w;
            adj_mat[v][u] = 1/w;
        }
        
        for (int i=1; i<t; i++) {
            adj_mat[i][i] = 1;
        }
        
        for (int m=1; m<t; m++) {
            for (int i=1; i<t; i++) {
                for (int j=1; j<t; j++) {
                    if (adj_mat[i][m] != -1 && adj_mat[m][j] != -1 && adj_mat[i][j] == -1) {
                        double new_dist = adj_mat[i][m]*adj_mat[m][j];
                        adj_mat[i][j] = new_dist;
                    }
                }
            }
        }
        
        vector<double> r;
        
        for (vector<string> q : queries) {
            int u = var_map[q[0]];
            int v = var_map[q[1]];
            r.push_back(adj_mat[u][v]);
        }
        
        return r;
    }
};