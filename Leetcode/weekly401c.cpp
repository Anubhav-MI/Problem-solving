class Solution
{
public:
    int solve(int i, int &n, int t, vector<int> &reward, vector<vector<int>> &dp)
    {
        if (i >= n)
            return t;
        if (dp[i][t] != -1)
            return dp[i][t];
        int notake = solve(i + 1, n, t, reward, dp);
        int take = 0;
        if (t < reward[i])
            take = solve(i + 1, n, t + reward[i], reward, dp);
        return dp[i][t] = max(take, notake);
    }
    int maxTotalReward(vector<int> &reward)
    {
        int sum = 0;
        int n = reward.size();
        for (auto it : reward)
            sum += it;
        vector<vector<int>> dp(2001, vector<int>(4001, -1));

        sort(reward.begin(), reward.end());
        return solve(0, n, 0, reward, dp);
    }
};