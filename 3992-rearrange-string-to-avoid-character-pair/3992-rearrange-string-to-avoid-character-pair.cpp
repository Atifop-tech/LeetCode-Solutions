class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cnt = 0;
        for(auto x : s)
            if(x == y) cnt++;
        
        string ans(cnt, y);
        for(auto x : s)
            if(x != y) ans += x;
        
        return ans;
    }
};