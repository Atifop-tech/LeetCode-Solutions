class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int maxi = max(need1, need2);
        vector<int> mini(2);
        if(need1 < need2){
            mini[0] = cost2;
            mini[1] = need1;
        }
        else {
            mini[0] = cost1;
            mini[1] = need2; 
        }

        long long ans = LLONG_MAX;
        ans = min(ans, 1LL*costBoth*maxi);
        ans = min(ans, 1LL*(1LL*cost1*need1 + 1LL*cost2*need2));
        ans = min(ans, 1LL*(1LL*costBoth*mini[1] + 1LL*mini[0]*(maxi-mini[1])));
        return ans;
    }
};
