class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r = 0;
        int blank = 0;
        for(auto x : moves)
            if(x == 'R') r++;
            else if(x == 'L')r--;
            else blank++;
        
        return abs(r) + blank;
    }
};