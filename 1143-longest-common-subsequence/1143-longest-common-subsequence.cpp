class Solution {
public:

    int solve(string &s1, string &s2, vector<vector<int>> &dp, int n, int m) {

        
        if (n == 0 || m == 0) {
            return 0;
        }

     
        if (dp[n][m] != -1) {
            return dp[n][m];
        }

        if (s1[n - 1] == s2[m - 1]) {
            return dp[n][m] = 1 + solve(s1, s2, dp, n - 1, m - 1);
        }

        
        int ans1 = solve(s1, s2, dp, n - 1, m);
        int ans2 = solve(s1, s2, dp, n, m - 1);

        return dp[n][m] = max(ans1, ans2);
    }


    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        return solve(text1, text2, dp, n, m);
    }
};