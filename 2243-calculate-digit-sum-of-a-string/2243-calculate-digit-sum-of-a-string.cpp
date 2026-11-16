class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            int n = s.length();
            for(int i = 0; i < k; i++) s += "0";

            string new_s = "";
            for(int i = 0; i < n; i += k){
                int ans = 0;
                for(int j = i; j < i+k; j++) ans += s[j] - '0';
                new_s += to_string(ans);
            }

            s = new_s;
        }

        return s;
    }
};