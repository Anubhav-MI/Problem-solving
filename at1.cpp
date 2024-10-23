#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7; // Modular value to prevent overflow

string solve(int m, vector<string> s)
{
    long long int ans = 0;
    for (auto it : s)
    {
        long long int sum = 1;
        for (int i = 0; i < it.length(); i++)
        {
            long long int power_val = 1;
            int ascii_val = (int)it[i];
            for (int j = 0; j < m; j++) // Calculate power manually
            {
                power_val = (power_val * ascii_val) % MOD;
            }
            sum = (sum * (power_val)) % MOD; // Avoid overflow
        }
        ans = (ans + sum) % MOD;
    }
    if (ans % 2 == 0)
    {
        return "EVEN";
    }
    else
    {
        return "ODD";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        cout << solve(m, s) << endl;
    }
    return 0;
}
