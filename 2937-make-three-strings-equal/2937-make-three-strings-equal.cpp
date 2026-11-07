class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int idx = 0;
        int size = min({s1.length(), s2.length(), s3.length()});

        while(idx < size && s1[idx] == s2[idx] && s1[idx] == s3[idx]) idx++;

        if(!idx) return -1;
        return s1.length() - idx +
                s2.length() - idx +
                s3.length() - idx;
    }
};