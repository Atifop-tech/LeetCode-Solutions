class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = accumulate(nums.begin(), nums.end(), 0);

        if (total < abs(target) || (total + target) % 2 != 0) {
            return 0;
        }

        int s = (total + target) / 2;
        vector<int> dp(s + 1, 0);
        dp[0] = 1; 

        for (int num : nums) {
            for (int j = s; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[s];
    }
};