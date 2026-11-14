class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        vector<int> freq(51, 0);
        for(auto x : nums)
            if(freq[x]++ == 1) ans ^= x;

        return ans; 
    }
};