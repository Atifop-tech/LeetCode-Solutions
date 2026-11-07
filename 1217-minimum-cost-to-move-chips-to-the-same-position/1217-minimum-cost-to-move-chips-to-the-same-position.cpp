class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int arr[2] = {0,0};
        for(auto x : position) arr[x%2]++;

        return min(arr[0], arr[1]); 
    }
};