class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;

        for(int size = 1; size <= target; size++){
            for(auto x : nums){
                if(size >= x) dp[size] += dp[size - x];
            }
        }

        return dp[target];
    }
};