class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> x(n, 0);
        vector<int> y(m, 0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    x[i]++, y[j]++;
                }
            }
        }

        int count = 0;
       for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && (x[i] > 1 || y[j] > 1)){
                    count++;
                }
            }
        }

        return count;
    }
};