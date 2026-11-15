class Solution {
public:
    const long long MOD = 1e9 + 7;

    vector<long long> multiply(const vector<long long>& A, const vector<long long>& B) {
        return {
            (A[0] * B[0] + A[1] * B[2]) % MOD,
            (A[0] * B[1] + A[1] * B[3]) % MOD,
            (A[2] * B[0] + A[3] * B[2]) % MOD,
            (A[2] * B[1] + A[3] * B[3]) % MOD
        };
    }

    int countGoodStrings(long long n) {
        if (n == 1) return 2;

        vector<long long> ans_T = {1, 0, 0, 1};
        vector<long long> base = {1, 1, 1, 0};

        long long exp = n - 1;
        while (exp > 0) {
            if (exp & 1) {
                ans_T = multiply(ans_T, base);
            }
            base = multiply(base, base);
            exp >>= 1;
        }

        return (2LL * ans_T[0]) % MOD;
    }
};