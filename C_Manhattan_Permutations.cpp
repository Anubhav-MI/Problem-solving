#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n, int k, vector<int> &a)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += a[i] - i;
    }
    if (ans == k)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        return true;
    }
    return false;
}
bool form(vector<int> &nums, int start, int end, int k)
{
    if (start == end)
    {
        return check(nums.size(), k, nums);
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(nums[start], nums[i]);
            form(nums, start + 1, end, k);
            swap(nums[start], nums[i]); // backtrack
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;

        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        int f = 0;
        if (form(a, 1, n, k) != 1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}