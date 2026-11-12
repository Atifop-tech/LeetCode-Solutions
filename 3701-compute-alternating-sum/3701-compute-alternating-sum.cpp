class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sign = 1;
        int ans = 0;
        for(auto x : nums){
            ans += x*sign;
            sign = -sign;
        }

        return ans;
    }
};