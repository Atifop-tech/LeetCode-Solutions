class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int total = accumulate(stones.begin(), stones.end(), 0);
        int sum = total / 2;

        vector<bool> dp(sum+1, 0);
        dp[0] = 1;

        int ans = 0;
        for(auto s : stones){
            for(int size = sum; size >= s; size--){
                dp[size] = dp[size] || dp[size - s];
                if(dp[size]) ans = max(ans, size);
            } 
        }

        return total - 2*ans;
    }
};