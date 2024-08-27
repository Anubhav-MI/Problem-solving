class Solution
{
public:
    const int MOD = 1e9 + 7;

    int valueAfterKSeconds(int n, int k)
    {
        vector<int> arr(n, 1);

        while (k > 0)
        {
            k--;
            long long sum = arr[0];
            for (int i = 1; i < n; i++)
            {
                sum = (sum + arr[i]) % MOD;
                arr[i] = sum;
            }
        }

        return arr[n - 1];
    }
};