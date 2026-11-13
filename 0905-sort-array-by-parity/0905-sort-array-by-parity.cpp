class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int o = 0, e = n-1;
        while(o < e){
            while(o < n && nums[o]%2 == 0) o++;
            while(e >= 0 && nums[e]%2 == 1) e--;

            if(o >= e) break;
            swap(nums[o], nums[e]);
            o++;
            e--;
        }

        return nums;
    }
};