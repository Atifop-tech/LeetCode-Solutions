class Solution {
public:
    int findSubstringInWraproundString(string s) {
        int n = s.length();
        if (n == 0) return 0;

        vector<int> max_len(26, 0);
        int cur_len = 0;

        for (int i = 0; i < n; i++) {
            if (i > 0 && (s[i] - s[i - 1] == 1 || s[i - 1] - s[i] == 25)) {
                cur_len++;
            } else {
                cur_len = 1;
            }

            int idx = s[i] - 'a';
            max_len[idx] = max(max_len[idx], cur_len);
        }

        return accumulate(max_len.begin(), max_len.end(), 0);
    }
};