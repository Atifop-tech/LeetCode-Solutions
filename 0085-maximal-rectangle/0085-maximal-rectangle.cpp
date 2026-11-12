class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = 0;
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols, 0);

        for (auto v : matrix) {
            for (int i = 0; i < v.size(); i++) {
                heights[i] = (v[i] == '1') ? heights[i] + 1 : 0;
            }

            int mini = INT_MAX;
            int cnt = 0;

            stack<int> st;
            for (int i = 0; i <= cols; i++) {
                int currHeight = (i == cols) ? 0 : heights[i];
                while (!st.empty() && currHeight < heights[st.top()]) {
                    int h = heights[st.top()];
                    st.pop();
                    int w = st.empty() ? i : i - st.top() - 1;
                    ans = max(ans, h * w);
                }
                st.push(i);
            }
        }

        return ans;
    }
};