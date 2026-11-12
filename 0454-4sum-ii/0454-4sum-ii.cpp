class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        unordered_map<int, int> mpp;
        for(auto x : nums1)
            for(auto y : nums2)
                mpp[x + y]++;

        for(auto x : nums3){
            for(auto y : nums4){
                if(mpp.count(-(x + y))) ans += mpp[-(x+y)];
            }
        }

        return ans;
    }
};