class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(auto x : logs){
            if(x[0] == '.' && x[1] == '.') ans = max(ans-1, 0);
            else if(x[0] != '.') ans++;
        }

        return ans;
    }
};