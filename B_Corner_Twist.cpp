#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<vector<int>> &nums, int row, int col)
{
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i][col] == 1 || nums[i][col] == 2)
        {
            flag = true;
        }
    }
    if (!flag)
    {
        return false;
    }
    int m = nums[0].size();
    for (int i = 0; i < m; i++)
    {
        if (nums[row][i] == 1 || nums[row][i] == 2)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums1(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            nums1[i][j] = s[j] - '0';
        }
    }
    vector<vector<int>> nums2(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            nums2[i][j] = s[j] - '0';
        }
    }

    int ans = 0;

    vector<vector<int>> inc(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int diff = nums2[i][j] - nums1[i][j];
            if (diff < 0)
            {
                diff = 3 + diff;
            }
            ans += diff;
            inc[i][j] = diff;
        }
    }
    if (ans % 3 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (inc[i][j] == 2)
            {
                inc[i][j] = 0;
                if (!check(inc, i, j))
                {
                    cout << "NO" << endl;
                    return;
                }
                inc[i][j] = 2;
            }
        }
    }

    cout << "YES" << endl;
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}