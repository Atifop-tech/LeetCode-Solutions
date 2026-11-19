class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.length(), m = t.length();
        if(n > m) return false;

        vector<int> pref(n, m), suff(n, -1);
        int j = 0;
        for(int i = 0; i < n; i++){
            while(j < m && s[i] != t[j]) ++j;

            if(j >= m) break;
            pref[i] = j++;
        }

        if(pref[n-1] < m) return 1;

        j = m-1;
        for(int i = n-1; i >=0; --i){
            while(j >= 0 && s[i] != t[j]) --j;

            if(j < 0) break;
            suff[i] = j--;
        }

        for(int i = 0; i < n; i++){
            int left = (i > 0) ? pref[i-1] : -1;
            int right = (i < n-1) ? suff[i+1] : m;
            if(left < m && right >= 0 && left + 1 < right) return 1;
        }

        return 0;
    }
};