class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int ans = 0;
        int last_idx = -1;
        vector<pair<int, int>> last(26, {-1, -1});

        for(int i = 0; i < n; ++i){
            if(last[s[i] - 'a'].first != -1)
                last_idx = max(last_idx, last[s[i] - 'a'].first);
            
            last[s[i] - 'a'].first = last[s[i] - 'a'].second;
            last[s[i] - 'a'].second = i;
            ans = max(ans, i - last_idx);
        }

        return ans;
    }
};