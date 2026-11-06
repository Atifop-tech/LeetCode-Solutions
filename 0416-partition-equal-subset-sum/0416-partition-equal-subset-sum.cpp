class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int target = accumulate(nums.begin(), nums.end(), 0);
        if(target%2) return 0;

        target /= 2;
        vector<bool> dp(target + 1, 0);
        dp[0] = 1;

        for(int i = 0; i < n; i++){
            for(int size = target; size >= nums[i]; size--){
                dp[size] = dp[size] || dp[size - nums[i]];
            }
            if(dp[target]) return 1;
        }

        return dp[target];
    }
};