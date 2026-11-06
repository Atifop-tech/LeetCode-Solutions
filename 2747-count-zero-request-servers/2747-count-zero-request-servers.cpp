class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();
        
        vector<pair<int, int>> sorted_queries(m);
        for (int i = 0; i < m; ++i) {
            sorted_queries[i] = {queries[i], i};
        }

        sort(sorted_queries.begin(), sorted_queries.end());
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        vector<int> ans(m);
        vector<int> freq(n + 1, 0);
        int active_servers = 0;
        int left = 0, right = 0;

        for (const auto& [q, orig_idx] : sorted_queries) {
            while (right < logs.size() && logs[right][1] <= q) {
                int server = logs[right][0];
                if (freq[server] == 0) {
                    active_servers++;
                }
                freq[server]++;
                right++;
            }

            while (left < logs.size() && logs[left][1] < q - x) {
                int server = logs[left][0];
                freq[server]--;
                if (freq[server] == 0) {
                    active_servers--;
                }
                left++;
            }

            ans[orig_idx] = n - active_servers;
        }

        return ans;
    }
};