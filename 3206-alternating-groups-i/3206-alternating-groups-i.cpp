class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int cnt = 0;
        for(int i = 2; i <= n+1; i++)
            if(colors[i%n] == colors[i-2] && colors[i%n] != colors[(i-1)%n]) cnt++;

        return cnt;
    }
};