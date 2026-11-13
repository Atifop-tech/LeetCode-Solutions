class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int idx = 1; idx < n; idx++){
                if(s[(i+idx)%n] == s[(i+idx-1)%n]) cnt++;
            }
            if(cnt == k) ans++;
        }

        return ans;
    }
};