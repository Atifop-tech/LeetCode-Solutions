class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> user_mins;
        
        for (const auto& log : logs) {
            user_mins[log[0]].insert(log[1]);
        }
        
        vector<int> ans(k, 0);
        for (const auto& [id, mins] : user_mins) {
            int uam = mins.size();
            if (uam <= k) {
                ans[uam - 1]++;
            }
        }
        
        return ans;
    }
};