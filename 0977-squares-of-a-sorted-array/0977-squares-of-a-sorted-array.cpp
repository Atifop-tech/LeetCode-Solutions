class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int r = 0, l = 0;
        while(r < nums.size() && nums[r] < 0) r++;
        l = r-1;
        while(l >= 0 && r < nums.size()){
            if(-nums[l] < nums[r]) {
                ans.push_back(nums[l] * nums[l]);
                l--;
            }
            else {
                ans.push_back(nums[r] * nums[r]);
                r++; 
            }
        }

        while(l >= 0) {
            ans.push_back(nums[l] * nums[l]);
            l--;
        }

        while(r < nums.size()){
            ans.push_back(nums[r] * nums[r]);
            r++;
        }

        return ans;
    }
};