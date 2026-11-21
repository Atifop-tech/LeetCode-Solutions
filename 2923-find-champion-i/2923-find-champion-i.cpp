class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ans = 0;
        int cnt = 0;
        for(int i = 0; i < grid.size(); ++i){
            int temp = 0;
            for(int j = 0; j < grid.size(); ++j){
                temp += grid[i][j];
            }
            if(temp > cnt){
                ans = i;
                cnt = temp;
            }
        }

        return ans;
    }
};