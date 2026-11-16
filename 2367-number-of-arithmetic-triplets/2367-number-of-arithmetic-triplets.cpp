class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        sort(nums.begin(), nums.end());
        unordered_set<int> st;
        for(auto x : nums) st.insert(x);

        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(st.count(nums[i] + diff) && st.count(nums[i] + 2 * diff)) ans++;
        }

        return ans;
    }
};